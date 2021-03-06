set(sources ${sources}
	include/RE/Skyrim.cpp
	include/RE/A/ActiveEffect.cpp
	include/RE/A/Actor.cpp
	include/RE/A/ActorEquipManager.cpp
	include/RE/A/ActorValueOwner.cpp
	include/RE/A/AddCallbackVisitor.cpp
	include/RE/A/AIFormulas.cpp
	include/RE/A/AIProcess.cpp
	include/RE/A/ArmorRatingVisitor.cpp
	include/RE/A/ArmorRatingVisitorBase.cpp
	include/RE/A/Array.cpp
	include/RE/B/BarterMenu.cpp
	include/RE/B/BGSAttackData.cpp
	include/RE/B/BGSBaseAlias.cpp
	include/RE/B/BGSBipedObjectForm.cpp
	include/RE/B/BGSColorForm.cpp
	include/RE/B/BGSEntryPointFunctionDataActivateChoice.cpp
	include/RE/B/BGSEntryPointPerkEntry.cpp
	include/RE/B/BGSFootstepManager.cpp
	include/RE/B/BGSHeadPart.cpp
	include/RE/B/BGSImpactDataSet.cpp
	include/RE/B/BGSKeywordForm.cpp
	include/RE/B/BGSListForm.cpp
	include/RE/B/BGSLocation.cpp
	include/RE/B/BGSMaterialType.cpp
	include/RE/B/BGSOpenCloseForm.cpp
	include/RE/B/BGSPerkEntry.cpp
	include/RE/B/BGSSaveLoadManager.cpp
	include/RE/B/BGSSoundCategory.cpp
	include/RE/B/BGSStoryTeller.cpp
	include/RE/B/bhkCharProxyController.cpp
	include/RE/B/bhkCollisionObject.cpp
	include/RE/B/bhkRefObject.cpp
	include/RE/B/bhkShape.cpp
	include/RE/B/BipedAnim.cpp
	include/RE/B/BookMenu.cpp
	include/RE/B/BSAtomic.cpp
	include/RE/B/BSAudioManager.cpp
	include/RE/B/BSEffectShaderData.cpp
	include/RE/B/BSExtraData.cpp
	include/RE/B/BSFixedString.cpp
	include/RE/B/BSHandleRefObject.cpp
	include/RE/B/BSInputDevice.cpp
	include/RE/B/BSInputDeviceManager.cpp
	include/RE/B/BSLightingShaderMaterialBase.cpp
	include/RE/B/BSPointerHandle.cpp
	include/RE/B/BSResourceNiBinaryStream.cpp
	include/RE/B/BSResponse.cpp
	include/RE/B/BSScaleformManager.cpp
	include/RE/B/BSScriptObjectBindPolicy.cpp
	include/RE/B/BSShaderProperty.cpp
	include/RE/B/BSSoundHandle.cpp
	include/RE/B/BSStringPool.cpp
	include/RE/B/BSSystemFileStorage.cpp
	include/RE/B/BSTArray.cpp
	include/RE/B/BSTCreateFactoryManager.cpp
	include/RE/B/BSVisit.cpp
	include/RE/B/BSWin32KeyboardDevice.cpp
	include/RE/B/BSWin32SaveDataSystemUtility.cpp
	include/RE/B/BSXFlags.cpp
	include/RE/C/Calendar.cpp
	include/RE/C/ChestsLooted.cpp
	include/RE/C/CommandTable.cpp
	include/RE/C/Console.cpp
	include/RE/C/ConsoleLog.cpp
	include/RE/C/ContainerMenu.cpp
	include/RE/C/ControlMap.cpp
	include/RE/E/Effect.cpp
	include/RE/E/ExtraAliasInstanceArray.cpp
	include/RE/E/ExtraAshPileRef.cpp
	include/RE/E/ExtraCannotWear.cpp
	include/RE/E/ExtraCanTalkToPlayer.cpp
	include/RE/E/ExtraCharge.cpp
	include/RE/E/ExtraContainerChanges.cpp
	include/RE/E/ExtraCount.cpp
	include/RE/E/ExtraDataList.cpp
	include/RE/E/ExtraEnchantment.cpp
	include/RE/E/ExtraForcedTarget.cpp
	include/RE/E/ExtraHealth.cpp
	include/RE/E/ExtraHotkey.cpp
	include/RE/E/ExtraLightData.cpp
	include/RE/E/ExtraLock.cpp
	include/RE/E/ExtraMissingLinkedRefIDs.cpp
	include/RE/E/ExtraOwnership.cpp
	include/RE/E/ExtraPoison.cpp
	include/RE/E/ExtraRank.cpp
	include/RE/E/ExtraReferenceHandle.cpp
	include/RE/E/ExtraSoul.cpp
	include/RE/E/ExtraTextDisplayData.cpp
	include/RE/E/ExtraUniqueID.cpp
	include/RE/F/FxDelegate.cpp
	include/RE/F/FxDelegateArgs.cpp
	include/RE/G/GameSettingCollection.cpp
	include/RE/G/GAtomic.cpp
	include/RE/G/GFxLoader.cpp
	include/RE/G/GFxLog.cpp
	include/RE/G/GFxMovie.cpp
	include/RE/G/GFxMovieDef.cpp
	include/RE/G/GFxMovieView.cpp
	include/RE/G/GFxRenderConfig.cpp
	include/RE/G/GFxResource.cpp
	include/RE/G/GFxResourceID.cpp
	include/RE/G/GFxResourceKey.cpp
	include/RE/G/GFxState.cpp
	include/RE/G/GFxStateBag.cpp
	include/RE/G/GFxTranslator.cpp
	include/RE/G/GFxValue.cpp
	include/RE/G/GFxWStringBuffer.cpp
	include/RE/G/GFxWWHelper.cpp
	include/RE/G/GiftMenu.cpp
	include/RE/G/GMemory.cpp
	include/RE/G/GMemoryHeap.cpp
	include/RE/G/GRefCountImpl.cpp
	include/RE/G/GRefCountNTSImpl.cpp
	include/RE/G/GRenderer.cpp
	include/RE/G/GStd.cpp
	include/RE/G/GString.cpp
	include/RE/G/GViewport.cpp
	include/RE/H/HeapBlock.cpp
	include/RE/H/hkBaseTypes.cpp
	include/RE/H/hkpBroadPhase.cpp
	include/RE/H/hkpCdBody.cpp
	include/RE/H/hkpCharacterProxyListener.cpp
	include/RE/H/hkpMaterial.cpp
	include/RE/H/hkpWorldObject.cpp
	include/RE/H/hkReferencedObject.cpp
	include/RE/H/hkStringPtr.cpp
	include/RE/H/HUDMeter.cpp
	include/RE/H/HUDObject.cpp
	include/RE/I/IAnimationGraphManagerHolder.cpp
	include/RE/I/IFormFactory.cpp
	include/RE/I/IFunction.cpp
	include/RE/I/IHandlerFunctor.cpp
	include/RE/I/IMemoryStore.cpp
	include/RE/I/IMenu.cpp
	include/RE/I/INIPrefSettingCollection.cpp
	include/RE/I/INISettingCollection.cpp
	include/RE/I/InputEvent.cpp
	include/RE/I/InterfaceStrings.cpp
	include/RE/I/Inventory.cpp
	include/RE/I/Inventory3DManager.cpp
	include/RE/I/InventoryChanges.cpp
	include/RE/I/InventoryEntryData.cpp
	include/RE/I/IObjectHandlePolicy.cpp
	include/RE/I/IStackCallbackFunctor.cpp
	include/RE/I/ItemCrafted.cpp
	include/RE/I/ItemList.cpp
	include/RE/I/ItemsPickpocketed.cpp
	include/RE/I/IVirtualMachine.cpp
	include/RE/L/LocalMapCamera.cpp
	include/RE/L/Location.cpp
	include/RE/L/LockpickingMenu.cpp
	include/RE/L/LooseFileStream.cpp
	include/RE/M/MagicFavorites.cpp
	include/RE/M/MagicItem.cpp
	include/RE/M/MagicTarget.cpp
	include/RE/M/Main.cpp
	include/RE/M/MemoryPage.cpp
	include/RE/M/MenuControls.cpp
	include/RE/M/MenuEventHandler.cpp
	include/RE/M/MiddleHighProcessData.cpp
	include/RE/M/Misc.cpp
	include/RE/N/NativeFunctionBase.cpp
	include/RE/N/NiAnimationKey.cpp
	include/RE/N/NiAVObject.cpp
	include/RE/N/NiBinaryStream.cpp
	include/RE/N/NiCamera.cpp
	include/RE/N/NiColorData.cpp
	include/RE/N/NiColorKey.cpp
	include/RE/N/NiControllerManager.cpp
	include/RE/N/NiExtraData.cpp
	include/RE/N/NiFloatData.cpp
	include/RE/N/NiFloatKey.cpp
	include/RE/N/NiInterpolator.cpp
	include/RE/N/NiMath.cpp
	include/RE/N/NiMatrix3.cpp
	include/RE/N/NiMemManager.cpp
	include/RE/N/NiNode.cpp
	include/RE/N/NiObject.cpp
	include/RE/N/NiObjectNET.cpp
	include/RE/N/NiPoint3.cpp
	include/RE/N/NiRefObject.cpp
	include/RE/N/NiSkinInstance.cpp
	include/RE/N/NiSystem.cpp
	include/RE/N/NiTCollection.cpp
	include/RE/N/NiTexture.cpp
	include/RE/N/NiTimeController.cpp
	include/RE/O/Object.cpp
	include/RE/O/ObjectTypeInfo.cpp
	include/RE/P/PackedInstructionStream.cpp
	include/RE/P/PackUnpack.cpp
	include/RE/P/PlayerCamera.cpp
	include/RE/P/PlayerCharacter.cpp
	include/RE/P/PlayerControls.cpp
	include/RE/P/PlayerInputHandler.cpp
	include/RE/P/ProcessLists.cpp
	include/RE/R/RemoveCallbackVisitor.cpp
	include/RE/S/ScrapHeap.cpp
	include/RE/S/Script.cpp
	include/RE/S/ScriptEventSourceHolder.cpp
	include/RE/S/Setting.cpp
	include/RE/S/Sky.cpp
	include/RE/S/SkyrimVM.cpp
	include/RE/S/Stack.cpp
	include/RE/S/StackFrame.cpp
	include/RE/S/Stream.cpp
	include/RE/S/StreamBase.cpp
	include/RE/T/TaskQueueInterface.cpp
	include/RE/T/TES.cpp
	include/RE/T/TESAIForm.cpp
	include/RE/T/TESAmmo.cpp
	include/RE/T/TESCamera.cpp
	include/RE/T/TESClimate.cpp
	include/RE/T/TESCondition.cpp
	include/RE/T/TESContainer.cpp
	include/RE/T/TESDataHandler.cpp
	include/RE/T/TESDescription.cpp
	include/RE/T/TESFaction.cpp
	include/RE/T/TESFile.cpp
	include/RE/T/TESForm.cpp
	include/RE/T/TESHavokUtilities.cpp
	include/RE/T/TESHitEvent.cpp
	include/RE/T/TESLeveledList.cpp
	include/RE/T/TESNPC.cpp
	include/RE/T/TESObjectARMA.cpp
	include/RE/T/TESObjectARMO.cpp
	include/RE/T/TESObjectBOOK.cpp
	include/RE/T/TESObjectCELL.cpp
	include/RE/T/TESObjectREFR.cpp
	include/RE/T/TESObjectSTAT.cpp
	include/RE/T/TESObjectWEAP.cpp
	include/RE/T/TESQuest.cpp
	include/RE/T/TESRace.cpp
	include/RE/T/TESTopic.cpp
	include/RE/T/TESTopicInfo.cpp
	include/RE/T/TESWorldSpace.cpp
	include/RE/T/ThumbstickEvent.cpp
	include/RE/T/TypeInfo.cpp
	include/RE/U/UI.cpp
	include/RE/U/UIBlurManager.cpp
	include/RE/U/UIMessageQueue.cpp
	include/RE/U/UserEvents.cpp
	include/RE/V/Variable.cpp
	include/RE/V/VirtualMachine.cpp
	include/RE/Z/ZeroFunctionArguments.cpp
	include/REL/Relocation.cpp
	include/SKSE/API.cpp
	include/SKSE/IAT.cpp
	include/SKSE/Interfaces.cpp
	include/SKSE/Logger.cpp
	include/SKSE/RegistrationMap.cpp
	include/SKSE/RegistrationSet.cpp
	include/SKSE/Trampoline.cpp
	include/SKSE/Impl/PCH.cpp
	include/SKSE/Impl/WinAPI.cpp
)
