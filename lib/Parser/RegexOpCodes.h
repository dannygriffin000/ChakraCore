//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------
// M(TagName)
//     ClassName == TagName##Inst
// MTemplate(TagName, TemplateDeclaration, GenericClassName, SpecializedClassName)

// 0x00
M(Nop) // Opcode byte 0x00 is a NOP (allows for NOP-sleds for alignment if necessary)
M(Fail)
M(Succ)
M(Jump)
M(JumpIfNotChar)
M(MatchCharOrJump)
M(JumpIfNotSet)
M(MatchSetOrJump)
// 0x08
M(Switch10)
M(Switch20)
M(SwitchAndConsume10)
M(SwitchAndConsume20)
M(BOITest)
M(EOITest)
M(BOLTest)
M(EOLTest)
// 0x10
M(WordBoundaryTest)
M(MatchChar)
M(MatchChar2)
M(MatchChar3)
M(MatchChar4)
MTemplate(MatchSet, template<bool IsNegation>, MatchSetInst, MatchSetInst<false>)
MTemplate(MatchNegatedSet, template<bool IsNegation>, MatchSetInst, MatchSetInst<true>)
M(MatchLiteral)
// 0x18
M(MatchLiteralEquiv)
M(MatchTrie)
M(OptMatchChar)
M(OptMatchSet)
M(SyncToCharAndContinue)
M(SyncToChar2SetAndContinue)
MTemplate(SyncToSetAndContinue, template<bool IsNegation>, SyncToSetAndContinueInst, SyncToSetAndContinueInst<false>)
MTemplate(SyncToNegatedSetAndContinue, template<bool IsNegation>, SyncToSetAndContinueInst, SyncToSetAndContinueInst<true>)
// 0x20
M(SyncToChar2LiteralAndContinue) // SyncToLiteralAndContinueInstT<Char2LiteralScannerMixin>
M(SyncToLiteralAndContinue) // SyncToLiteralAndContinueInstT<ScannerMixin>
M(SyncToLinearLiteralAndContinue) // SyncToLiteralAndContinueInstT<ScannerMixin_WithLinearCharMap>
M(SyncToLiteralEquivAndContinue) // SyncToLiteralAndContinueInstT<EquivScannerMixin>
M(SyncToLiteralEquivTrivialLastPatCharAndContinue) // SyncToLiteralAndContinueInstT<EquivTrivialLastPatCharScannerMixin>
M(SyncToCharAndConsume)
M(SyncToChar2SetAndConsume)
MTemplate(SyncToSetAndConsume, template<bool IsNegation>, SyncToSetAndConsumeInst, SyncToSetAndConsumeInst<false>)
// 0x28
MTemplate(SyncToNegatedSetAndConsume, template<bool IsNegation>, SyncToSetAndConsumeInst, SyncToSetAndConsumeInst<true>)
M(SyncToChar2LiteralAndConsume) // SyncToLiteralAndConsumeInstT<Char2LiteralScannerMixin>
M(SyncToLiteralAndConsume) // SyncToLiteralAndConsumeInstT<ScannerMixin>
M(SyncToLinearLiteralAndConsume) // SyncToLiteralAndConsumeInstT<ScannerMixin_WithLinearCharMap>
M(SyncToLiteralEquivAndConsume) // SyncToLiteralAndConsumeInstT<EquivScannerMixin>
M(SyncToLiteralEquivTrivialLastPatCharAndConsume) // SyncToLiteralAndConsumeInstT<EquivTrivialLastPatCharScannerMixin>
M(SyncToCharAndBackup)
// REVIEW (doilij): why not have a SyncToChar2SetAndBackup ?
MTemplate(SyncToSetAndBackup, template<bool IsNegation>, SyncToSetAndBackupInst, SyncToSetAndBackupInst<false>)
// 0x30
MTemplate(SyncToNegatedSetAndBackup, template<bool IsNegation>, SyncToSetAndBackupInst, SyncToSetAndBackupInst<true>)
M(SyncToChar2LiteralAndBackup) // SyncToLiteralAndBackupInstT<Char2LiteralScannerMixin>
M(SyncToLiteralAndBackup) // SyncToLiteralAndBackupInstT<ScannerMixin>
M(SyncToLinearLiteralAndBackup) // SyncToLiteralAndBackupInstT<ScannerMixin_WithLinearCharMap>
M(SyncToLiteralEquivAndBackup) // SyncToLiteralAndBackupInstT<EquivScannerMixin>
M(SyncToLiteralEquivTrivialLastPatCharAndBackup) // SyncToLiteralAndBackupInstT<EquivTrivialLastPatCharScannerMixin>
M(SyncToLiteralsAndBackup)
M(MatchGroup)
// 0x38
M(BeginDefineGroup)
M(EndDefineGroup)
M(DefineGroupFixed)
M(BeginLoop)
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
M(LoopAsciiSet)
M(LoopAsciiSetWithFollowFirst)
M(BeginLoopFixedGroupLastIteration)
M(RepeatLoopFixedGroupLastIteration)
M(BeginGreedyLoopNoBacktrack)
// 0x48
M(RepeatGreedyLoopNoBacktrack)
MTemplate(ChompCharStar, template<ChompMode Mode>, ChompCharInst, ChompCharInst<ChompMode::Star>)
MTemplate(ChompCharPlus, template<ChompMode Mode>, ChompCharInst, ChompCharInst<ChompMode::Plus>)
MTemplate(ChompSetStar, template<ChompMode Mode>, ChompSetInst, ChompSetInst<ChompMode::Star>)
MTemplate(ChompSetPlus, template<ChompMode Mode>, ChompSetInst, ChompSetInst<ChompMode::Plus>)
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
M(TryMatchSet)
M(BeginAssertion)
M(EndAssertion)
