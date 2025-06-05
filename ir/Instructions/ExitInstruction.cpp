///
/// @file ExitInstruction.cpp
/// @brief 函数出口或返回指令
///
/// @author zenglj (zenglj@live.com)
/// @version 1.0
/// @date 2024-09-29
///
/// @copyright Copyright (c) 2024
///
/// @par 修改日志:
/// <table>
/// <tr><th>Date       <th>Version <th>Author  <th>Description
/// <tr><td>2024-09-29 <td>1.0     <td>zenglj  <td>新建
/// </table>
///
#include "VoidType.h"

#include "ExitInstruction.h"
#include "Value.h"
/// @brief return语句指令
/// @param _result 返回结果值
ExitInstruction::ExitInstruction(Function * _func, Value * _result)
    : Instruction(_func, IRInstOperator::IRINST_OP_EXIT, VoidType::getType())
{
    if (_result != nullptr) {
        addOperand(_result);
    }
}

/// @brief 转换成字符串显示
/// @param str 转换后的字符串
std::string ExitInstruction::toString() const {
    std::string result_str;
    if (getOperandsNum() == 0) { // void return
        result_str = "exit"; // <--- 修改点：void 返回时只输出 "ret"
    } else { // value return
        Value *returnValue = getOperand(0);
        if (returnValue) {
            result_str = "exit " + returnValue->getIRName();
        } else {
            // 理论上，如果 getOperandsNum() > 0，operand(0) 不应为 null
            result_str = "; <Error: ExitInstruction has non-zero operands but first operand is null>";
        }
    }
    return result_str;
}