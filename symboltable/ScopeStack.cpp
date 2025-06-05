///
/// @file ScopeStack.cpp
/// @brief 作用域栈管理
/// @author zenglj (zenglj@live.com)
/// @version 1.0
/// @date 2024-09-19
///
/// @copyright Copyright (c) 2024
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2024-09-19 <td>1.0     <td>zenglj  <td>新建
/// </table>
///
#include "ScopeStack.h"

///
/// @brief 进入作用域
///
void ScopeStack::enterScope()
{
    // 在栈顶新加入一层，没有变量
    std::unordered_map<std::string, Value *> valueMap;
    valueStack.emplace_back(valueMap);
}

///
/// @brief 离开作用域
///
void ScopeStack::leaveScope()
{
    valueStack.pop_back();
}

///
/// @brief 向当前的作用域中加入变量
/// @param value 变量
///
bool ScopeStack::insertValue(Value * value) // <--- 修改点：返回类型和逻辑
{
    if (!value) {
        // minic_log(LOG_WARNING, "ScopeStack::insertValue: Attempted to insert a null Value pointer.");
        return false; // 不能插入空指针
    }
    if (value->getName().empty()) {
        // minic_log(LOG_WARNING, "ScopeStack::insertValue: Attempted to insert a Value with an empty name.");
        // 根据你的设计，决定是否允许插入没有名字的 Value。通常是不允许的，除非是特殊用途。
        return false; // 假设不允许
    }

    if (valueStack.empty()) {
        // minic_log(LOG_ERROR, "ScopeStack::insertValue: Scope stack is empty. Cannot insert value '%s'. Call enterScope() first.", value->getName().c_str());
        // 这是一个严重的逻辑错误，作用域栈不应该为空
        return false;
    }

    // 获取当前作用域的符号表 (即 valueStack 的最后一个元素)
    std::unordered_map<std::string, Value *>& current_scope_map = valueStack.back();

    // 检查名称是否已存在于当前作用域
    if (current_scope_map.count(value->getName())) {
        // 名称已存在，表示重定义
        // minic_log(LOG_SEMANTIC_ERROR, "ScopeStack::insertValue: Redefinition of symbol '%s' in the current scope.", value->getName().c_str());
        return false; // 插入失败
    }

    // 名称不存在，可以安全插入
    current_scope_map.insert(std::make_pair(value->getName(), value));
    return true; // 插入成功
}

///
/// @brief 从当前的作用域中查找指定的变量名
/// @param  name 变量名
/// @return Value* 变量对象，若没有，则返回空指针
///
Value * ScopeStack::findCurrentScope(std::string name)
{
    // 在栈顶的作用域中查找，即当前作用域
    auto it = valueStack.back().find(name);
    if (it != valueStack.back().end()) {
        return it->second;
    }
    return nullptr;
}

///
/// @brief 逐层级遍历作用域检查变量是否存在
/// @param  name 变量名
/// @return Value* 变量对象。若没有，则返回空指针
///
Value * ScopeStack::findAllScope(std::string name)
{
    // 模拟栈操作，从栈顶开始查找
    for (auto it = valueStack.rbegin(); it != valueStack.rend(); ++it) {
        auto p = it->find(name);
        if (p != it->end()) {
            return p->second;
        }
    }
    return nullptr;
}

///
/// @brief 获取当前的作用域栈的层号
/// @return int 层号，从0开始
///
int ScopeStack::getCurrentScopeLevel()
{
    return valueStack.size() - 1;
}
