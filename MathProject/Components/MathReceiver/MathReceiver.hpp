// ======================================================================
// \title  MathReceiver.hpp
// \author justi
// \brief  hpp file for MathReceiver component implementation class
// ======================================================================

#ifndef MathProject_MathReceiver_HPP
#define MathProject_MathReceiver_HPP

#include "MathProject/Components/MathReceiver/MathReceiverComponentAc.hpp"

namespace MathProject {

class MathReceiver final : public MathReceiverComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct MathReceiver object
    MathReceiver(const char* const compName  //!< The component name
    );

    //! Destroy MathReceiver object
    ~MathReceiver();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for mathOpIn
    //!
    //! Port for receiving the math operation
    void mathOpIn_handler(FwIndexType portNum,            //!< The port number
                          F32 val1,                       //!< The first operand
                          const MathProject::MathOp& op,  //!< The operation
                          F32 val2                        //!< The second operand
                          ) override;
    void parameterUpdated(FwPrmIdType id) override;

    //! Handler implementation for schedIn
    //!
    //! The rate group scheduler input
    void schedIn_handler(FwIndexType portNum,  //!< The port number
                         U32 context           //!< The call order
                         ) override;

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command CLEAR_EVENT_THROTTLE
    //!
    //! Clear the event throttle
    void CLEAR_EVENT_THROTTLE_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                                         U32 cmdSeq            //!< The command sequence number
                                         ) override;
};

}  // namespace MathProject

#endif
