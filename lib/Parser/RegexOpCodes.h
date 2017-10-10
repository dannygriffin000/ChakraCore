//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
// M(TagName)
//     ClassName == TagName##Inst
// MTemplate(TagName, TemplateDeclaration, GenericClassName, SpecializedClassName)

// 0x00
M(Nop) // Opcode byte 0x00 is a NOP (allows for NOP-sleds for alignment if necessary)
M(Fail) // REMOVE (doilij): tested
M(Succ) // REMOVE (doilij): tested
M(Jump) // REMOVE (doilij): tested
M(JumpIfNotChar) // TODO (doilij): not tested
M(MatchCharOrJump) // TODO (doilij): not tested
M(JumpIfNotSet) // TODO (doilij): not tested
M(MatchSetOrJump) // TODO (doilij): not tested
// 0x08
M(Switch10) // TODO (doilij): not tested
M(Switch20) // TODO (doilij): not tested
M(SwitchAndConsume10) // REMOVE (doilij): tested
M(SwitchAndConsume20) // REMOVE (doilij): tested
M(BOITest) // TODO (doilij): not tested
M(EOITest) // TODO (doilij): not tested
M(BOLTest) // TODO (doilij): not tested
M(EOLTest) // TODO (doilij): not tested
// 0x10
M(WordBoundaryTest) // TODO (doilij): not tested
M(MatchChar) // REMOVE (doilij): tested
M(MatchChar2) // TODO (doilij): not tested
M(MatchChar3) // TODO (doilij): not tested
M(MatchChar4) // TODO (doilij): not tested
MTemplate(MatchSet, template<bool IsNegation>, MatchSetInst, MatchSetInst<false>) // TODO (doilij): not tested
MTemplate(MatchNegatedSet, template<bool IsNegation>, MatchSetInst, MatchSetInst<true>) // TODO (doilij): not tested
M(MatchLiteral) // REMOVE (doilij): tested
// 0x18
M(MatchLiteralEquiv) // REMOVE (doilij): tested
M(MatchTrie) // TODO (doilij): not tested
M(OptMatchChar) // TODO (doilij): not tested
M(OptMatchSet) // TODO (doilij): not tested
M(SyncToCharAndContinue) // TODO (doilij): not tested
M(SyncToChar2SetAndContinue) // TODO (doilij): not tested
MTemplate(SyncToSetAndContinue, template<bool IsNegation>, SyncToSetAndContinueInst, SyncToSetAndContinueInst<false>) // TODO (doilij): not tested
MTemplate(SyncToNegatedSetAndContinue, template<bool IsNegation>, SyncToSetAndContinueInst, SyncToSetAndContinueInst<true>) // TODO (doilij): not tested
// 0x20
M(SyncToChar2LiteralAndContinue) // SyncToLiteralAndContinueInstT<Char2LiteralScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralAndContinue) // SyncToLiteralAndContinueInstT<ScannerMixin> // TODO (doilij): not tested
M(SyncToLinearLiteralAndContinue) // SyncToLiteralAndContinueInstT<ScannerMixin_WithLinearCharMap> // TODO (doilij): not tested
M(SyncToLiteralEquivAndContinue) // SyncToLiteralAndContinueInstT<EquivScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralEquivTrivialLastPatCharAndContinue) // SyncToLiteralAndContinueInstT<EquivTrivialLastPatCharScannerMixin> // TODO (doilij): not tested
M(SyncToCharAndConsume) // TODO (doilij): not tested
M(SyncToChar2SetAndConsume) // TODO (doilij): not tested
MTemplate(SyncToSetAndConsume, template<bool IsNegation>, SyncToSetAndConsumeInst, SyncToSetAndConsumeInst<false>) // REMOVE (doilij): tested
// 0x28
MTemplate(SyncToNegatedSetAndConsume, template<bool IsNegation>, SyncToSetAndConsumeInst, SyncToSetAndConsumeInst<true>) // TODO (doilij): not tested
M(SyncToChar2LiteralAndConsume) // SyncToLiteralAndConsumeInstT<Char2LiteralScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralAndConsume) // SyncToLiteralAndConsumeInstT<ScannerMixin> // TODO (doilij): not tested
M(SyncToLinearLiteralAndConsume) // SyncToLiteralAndConsumeInstT<ScannerMixin_WithLinearCharMap> // TODO (doilij): not tested
M(SyncToLiteralEquivAndConsume) // SyncToLiteralAndConsumeInstT<EquivScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralEquivTrivialLastPatCharAndConsume) // SyncToLiteralAndConsumeInstT<EquivTrivialLastPatCharScannerMixin> // TODO (doilij): not tested
M(SyncToCharAndBackup) // REMOVE (doilij): tested
MTemplate(SyncToSetAndBackup, template<bool IsNegation>, SyncToSetAndBackupInst, SyncToSetAndBackupInst<false>) // REMOVE (doilij): tested
// 0x30
MTemplate(SyncToNegatedSetAndBackup, template<bool IsNegation>, SyncToSetAndBackupInst, SyncToSetAndBackupInst<true>) // TODO (doilij): not tested
M(SyncToChar2LiteralAndBackup) // SyncToLiteralAndBackupInstT<Char2LiteralScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralAndBackup) // SyncToLiteralAndBackupInstT<ScannerMixin> // TODO (doilij): not tested
M(SyncToLinearLiteralAndBackup) // SyncToLiteralAndBackupInstT<ScannerMixin_WithLinearCharMap> // TODO (doilij): not tested
M(SyncToLiteralEquivAndBackup) // SyncToLiteralAndBackupInstT<EquivScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralEquivTrivialLastPatCharAndBackup) // SyncToLiteralAndBackupInstT<EquivTrivialLastPatCharScannerMixin> // TODO (doilij): not tested
M(SyncToLiteralsAndBackup) // REMOVE (doilij): tested
M(MatchGroup) // TODO (doilij): not tested
// 0x38
M(BeginDefineGroup) // TODO (doilij): not tested
M(EndDefineGroup) // TODO (doilij): not tested
M(DefineGroupFixed) // REMOVE (doilij): tested // DONE MACROS
M(BeginLoop) // TODO (doilij): not tested
M(RepeatLoop)
M(BeginLoopIfChar)
M(BeginLoopIfSet)
M(RepeatLoopIfChar)
// 0x40
M(RepeatLoopIfSet)
M(BeginLoopFixed)
M(RepeatLoopFixed)
M(LoopSet)
M(LoopSetWithFollowFirst)
M(BeginLoopFixedGroupLastIteration)
M(RepeatLoopFixedGroupLastIteration)
M(BeginGreedyLoopNoBacktrack)
// 0x48
M(RepeatGreedyLoopNoBacktrack)
MTemplate(ChompCharStar, template<ChompMode Mode>, ChompCharInst, ChompCharInst<ChompMode::Star>)
MTemplate(ChompCharPlus, template<ChompMode Mode>, ChompCharInst, ChompCharInst<ChompMode::Plus>) // REMOVE (doilij): tested
MTemplate(ChompSetStar, template<ChompMode Mode>, ChompSetInst, ChompSetInst<ChompMode::Star>)
MTemplate(ChompSetPlus, template<ChompMode Mode>, ChompSetInst, ChompSetInst<ChompMode::Plus>) // REMOVE (doilij): tested
MTemplate(ChompCharGroupStar, template<ChompMode Mode>, ChompCharGroupInst, ChompCharGroupInst<ChompMode::Star>)
MTemplate(ChompCharGroupPlus, template<ChompMode Mode>, ChompCharGroupInst, ChompCharGroupInst<ChompMode::Plus>)
MTemplate(ChompSetGroupStar, template<ChompMode Mode>, ChompSetGroupInst, ChompSetGroupInst<ChompMode::Star>)
// 0x50
MTemplate(ChompSetGroupPlus, template<ChompMode Mode>, ChompSetGroupInst, ChompSetGroupInst<ChompMode::Plus>)
M(ChompCharBounded)
M(ChompSetBounded)
M(ChompSetBoundedGroupLastChar)
M(Try)
M(TryIfChar)
M(TryMatchChar)
M(TryIfSet)
// 0x58
M(TryMatchSet) // REMOVE (doilij): tested
M(BeginAssertion)
M(EndAssertion)
