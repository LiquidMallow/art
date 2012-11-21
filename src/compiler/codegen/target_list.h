ArmConditionCode ArmConditionEncoding(ConditionCode code);
AssemblerStatus AssembleInstructions(CompilationUnit* cUnit, uintptr_t startAddr);
bool DoubleReg(int reg);
bool FpReg(int reg);
bool GenAddLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenAndLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenArithOpDouble(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenArithOpFloat(CompilationUnit *cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenArithOpFloat(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenCmpFP(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenConversion(CompilationUnit* cUnit, Instruction::Code opcode, RegLocation rlDest, RegLocation rlSrc);
bool GenInlinedCas32(CompilationUnit* cUnit, CallInfo* info, bool need_write_barrier);
bool GenInlinedMinMaxInt(CompilationUnit *cUnit, CallInfo* info, bool isMin);
bool GenInlinedSqrt(CompilationUnit* cUnit, CallInfo* info);
bool GenNegLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
bool GenOrLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenSubLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool GenXorLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
bool ArchInit();
bool ArchVariantInit(void);
bool IsFpReg(int reg);
bool SameRegType(int reg1, int reg2);
bool SingleReg(int reg);
bool SmallLiteralDivide(CompilationUnit* cUnit, Instruction::Code dalvikOpcode, RegLocation rlSrc, RegLocation rlDest, int lit);
char* DecodeFPCSRegList(int count, int base, char* buf);
char* DecodeRegList(int opcode, int vector, char* buf);
RegisterInfo* GetRegInfo(CompilationUnit* cUnit, int reg);
RegLocation GetReturnAlt(CompilationUnit* cUnit);
RegLocation GetReturnWideAlt(CompilationUnit* cUnit);
void ClobberCalleeSave(CompilationUnit *cUnit);
void FreeCallTemps(CompilationUnit* cUnit);
void LockCallTemps(CompilationUnit* cUnit);
InstructionSet InstructionSet();
int EncodeImmDoubleHigh(int value);
int EncodeImmDouble(int valLo, int valHi);
int EncodeImmSingle(int value);
int EncodeShift(int code, int amount);
int ExpandImmediate(int value);
int InPosition(CompilationUnit* cUnit, int sReg);
int LeadingZeros(uint32_t val);
int LoadHelper(CompilationUnit* cUnit, int offset);
int ModifiedImmediate(uint32_t value);
int AllocTypedTemp(CompilationUnit* cUnit, bool fpHint, int regClass);
int AllocTypedTempPair(CompilationUnit* cUnit, bool fpHint, int regClass);
int AssignInsnOffsets(CompilationUnit* cUnit);
int GetInsnSize(LIR* lir);
int S2d(int lowReg, int highReg);
int TargetReg(SpecialTargetRegister reg);
LIR* FpRegCopy(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* GenRegMemCheck(CompilationUnit* cUnit, ConditionCode cCode, int reg1, int base, int offset, ThrowKind kind);
LIR* LoadBaseDispBody(CompilationUnit* cUnit, int rBase, int displacement, int rDest, int rDestHi, OpSize size, int sReg);
LIR* LoadBaseDisp(CompilationUnit* cUnit, int rBase, int displacement, int rDest, OpSize size, int sReg);
LIR* LoadBaseDispWide(CompilationUnit* cUnit, int rBase, int displacement, int rDestLo, int rDestHi, int sReg);
LIR* LoadBaseIndexed(CompilationUnit* cUnit, int rBase, int rIndex, int rDest, int scale, OpSize size);
LIR* LoadBaseIndexedDisp(CompilationUnit *cUnit, int rBase, int rIndex, int scale, int displacement, int rDest, int rDestHi, OpSize size, int sReg);
LIR* LoadConstantNoClobber(CompilationUnit* cUnit, int rDest, int value);
LIR* LoadConstantValueWide(CompilationUnit* cUnit, int rDestLo, int rDestHi, int valLo, int valHi);
LIR* LoadFPConstantValue(CompilationUnit* cUnit, int rDest, int value);
LIR* LoadMultiple(CompilationUnit *cUnit, int rBase, int rMask);
LIR* OpBranchUnconditional(CompilationUnit* cUnit, OpKind op);
LIR* OpCmpBranch(CompilationUnit* cUnit, ConditionCode cond, int src1, int src2, LIR* target);
LIR* OpCmpImmBranch(CompilationUnit* cUnit, ConditionCode cond, int reg, int checkValue, LIR* target);
LIR* OpCondBranch(CompilationUnit* cUnit, ConditionCode cc, LIR* target);
LIR* OpDecAndBranch(CompilationUnit* cUnit, ConditionCode cCode, int reg, LIR* target);
LIR* OpIT(CompilationUnit* cUnit, ArmConditionCode cond, const char* guide);
LIR* OpMem(CompilationUnit* cUnit, OpKind op, int rBase, int disp);
LIR* OpPcRelLoad(CompilationUnit* cUnit, int reg, LIR* target);
LIR* OpReg(CompilationUnit* cUnit, OpKind op, int rDestSrc);
LIR* OpRegCopy(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* OpRegCopyNoInsert(CompilationUnit* cUnit, int rDest, int rSrc);
LIR* OpRegImm(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int value);
LIR* OpRegMem(CompilationUnit* cUnit, OpKind op, int rDest, int rBase, int offset);
LIR* OpRegReg(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int rSrc2);
LIR* OpRegRegImm(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int value);
LIR* OpRegRegReg(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int rSrc2);
LIR* OpRegRegRegShift(CompilationUnit* cUnit, OpKind op, int rDest, int rSrc1, int rSrc2, int shift);
LIR* OpRegRegShift(CompilationUnit* cUnit, OpKind op, int rDestSrc1, int rSrc2, int shift);
LIR* OpTestSuspend(CompilationUnit* cUnit, LIR* target);
LIR* OpThreadMem(CompilationUnit* cUnit, OpKind op, int threadOffset);
LIR* OpVldm(CompilationUnit* cUnit, int rBase, int count);
LIR* OpVstm(CompilationUnit* cUnit, int rBase, int count);
LIR* StoreBaseDispBody(CompilationUnit* cUnit, int rBase, int displacement, int rSrc, int rSrcHi, OpSize size);
LIR* StoreBaseDisp(CompilationUnit* cUnit, int rBase, int displacement, int rSrc, OpSize size);
LIR* StoreBaseDispWide(CompilationUnit* cUnit, int rBase, int displacement, int rSrcLo, int rSrcHi);
LIR* StoreBaseIndexed(CompilationUnit* cUnit, int rBase, int rIndex, int rSrc, int scale, OpSize size);
LIR* StoreBaseIndexedDisp(CompilationUnit *cUnit, int rBase, int rIndex, int scale, int displacement, int rSrc, int rSrcHi, OpSize size, int sReg);
LIR* StoreMultiple(CompilationUnit *cUnit, int rBase, int rMask);
MIR* GetNextMir(CompilationUnit* cUnit, BasicBlock** pBb, MIR* mir);
MIR* SpecialIdentity(CompilationUnit* cUnit, MIR* mir);
MIR* SpecialIGet(CompilationUnit* cUnit, BasicBlock** bb, MIR* mir, OpSize size, bool longOrDouble, bool isObject);
MIR* SpecialIPut(CompilationUnit* cUnit, BasicBlock** bb, MIR* mir, OpSize size, bool longOrDouble, bool isObject);
RegLocation ArgLoc(CompilationUnit* cUnit, RegLocation loc);
RegLocation GenDivRem(CompilationUnit* cUnit, RegLocation rlDest, int regLo, int regHi, bool isDiv);
RegLocation GenDivRemLit(CompilationUnit* cUnit, RegLocation rlDest, int regLo, int lit, bool isDiv);
RegLocation LoadArg(CompilationUnit* cUnit, RegLocation loc);
RegLocation LocCReturn();
RegLocation LocCReturnDouble();
RegLocation LocCReturnFloat();
RegLocation LocCReturnWide();
std::string BuildInsnString(const char* fmt, LIR* lir, unsigned char* baseAddr);
uint64_t GetRegMaskCommon(CompilationUnit* cUnit, int reg);
uint32_t FpRegMask();
uint32_t FpRegMask();
uint64_t GetPCUseDefEncoding();
void ConvertShortToLongBranch(CompilationUnit* cUnit, LIR* lir);
void FreeRegLocTemps(CompilationUnit* cUnit, RegLocation rlKeep, RegLocation rlFree);
void GenCmpLong(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc1, RegLocation rlSrc2);
void GenDivZeroCheck(CompilationUnit* cUnit, int regLo, int regHi);
void GenEntrySequence(CompilationUnit* cUnit, RegLocation* ArgLocs, RegLocation rlMethod);
void GenExitSequence(CompilationUnit* cUnit);
void GenFillArrayData(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void GenFusedFPCmpBranch(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir, bool gtBias, bool isDouble);
void GenFusedLongCmpBranch(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir);
void GenMonitorEnter(CompilationUnit* cUnit, int optFlags, RegLocation rlSrc);
void GenMonitorExit(CompilationUnit* cUnit, int optFlags, RegLocation rlSrc);
void GenMultiplyByTwoBitMultiplier(CompilationUnit* cUnit, RegLocation rlSrc, RegLocation rlResult, int lit, int firstBit, int secondBit);
void GenNegDouble(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
void GenNegFloat(CompilationUnit* cUnit, RegLocation rlDest, RegLocation rlSrc);
void GenPackedSwitch(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void GenPrintLabel(CompilationUnit *cUnit, MIR* mir);
void GenSparseSwitch(CompilationUnit* cUnit, uint32_t tableOffset, RegLocation rlSrc);
void GenSpecialCase(CompilationUnit* cUnit, BasicBlock* bb, MIR* mir, SpecialCaseHandler specialCase);
void LoadPair(CompilationUnit* cUnit, int base, int lowReg, int highReg);
void LockLiveArgs(CompilationUnit* cUnit, MIR* mir);
void MarkGCCard(CompilationUnit* cUnit, int valReg, int tgtAddrReg);
void AdjustSpillMask(CompilationUnit* cUnit);
void ClobberCalleeSave(CompilationUnit *cUnit);
void DumpResourceMask(LIR* lir, uint64_t mask, const char* prefix);
void FlushReg(CompilationUnit* cUnit, int reg);
void FlushRegWide(CompilationUnit* cUnit, int reg1, int reg2);
void GenMemBarrier(CompilationUnit* cUnit, MemBarrierKind barrierKind);
void CompilerInitializeRegAlloc(CompilationUnit* cUnit);
void MarkPreservedSingle(CompilationUnit* cUnit, int vReg, int reg);
void NopLIR( LIR* lir);
void OpLea(CompilationUnit* cUnit, int rBase, int reg1, int reg2, int scale, int offset);
void OpRegCopyWide(CompilationUnit* cUnit, int destLo, int destHi, int srcLo, int srcHi);
void OpRegThreadMem(CompilationUnit* cUnit, OpKind op, int rDest, int threadOffset);
void OpTlsCmp(CompilationUnit* cUnit, int offset, int val);
bool BranchUnconditional(LIR* lir);
void SetupTargetResourceMasks(CompilationUnit* cUnit, LIR* lir);
void SpillCoreRegs(CompilationUnit* cUnit);
void UnSpillCoreRegs(CompilationUnit* cUnit);
X86ConditionCode X86ConditionEncoding(ConditionCode cond);
uint64_t GetTargetInstFlags(int opcode);
const char* GetTargetInstName(int opcode);
const char* GetTargetInstFmt(int opcode);
