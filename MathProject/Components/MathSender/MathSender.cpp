// ======================================================================
// \title  MathSender.cpp
// \author justi
// \brief  cpp file for MathSender component implementation class
// ======================================================================

#include "MathProject/Components/MathSender/MathSender.hpp"

namespace MathProject {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

MathSender ::MathSender(const char* const compName) : MathSenderComponentBase(compName) {}

MathSender ::~MathSender() {}

// ----------------------------------------------------------------------
// Handler implementations for typed input ports
// ----------------------------------------------------------------------

void MathSender ::mathResultIn_handler(FwIndexType portNum, F32 result) {
    // TODO
}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void MathSender ::DO_MATH_cmdHandler(FwOpcodeType opCode,
                                     U32 cmdSeq,
                                     F32 val1,
                                     const MathProject::MathOp& op,
                                     F32 val2) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace MathProject
