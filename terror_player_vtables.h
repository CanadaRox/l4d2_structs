#ifndef _INCLUDE_TERROR_PLAYER_VTABLES_H_
#define _INCLUDE_TERROR_PLAYER_VTABLES_H_

#include "network_var.h"

struct IHandleEntity_iface
{
	void * SetRefEHandle;
	void * GetRefEHandle;
};

struct IServerUnknown_iface
{
	void * GetCollideable;
	void * GetNetworkable;
	void * GetBaseEntity;
};

struct IServerEntity_iface
{
	void * GetModelIndex;
	void * GetModelName;
	void * SetModelIndex;
};

struct CBaseEntity_iface
{
	void * GetServerClass;
	void * YouForgotToImplementOrDeclareServerClass;
	void * GetDataDescMap;
	void * GetScriptDesc;
	void * GetAIAddOn;
	void * TestCollision;
	void * TestHitboxes;
	void * ComputeWorldSpaceSurroundingBox;
	void * ShouldCollide;
	void * SetOwnerEntity;
	void * ShouldTransmit;
	void * UpdateTransmitState;
	void * SetTransmit;
	void * GetTracerType;
	void * Spawn;
	void * ShouldPrecache;
	void * Precache;
	void * SetModel;
	void * InitSharedVars;
	void * PostConstructor;
	void * PostClientActive;
	void * OnParseMapDataFinished;
	void * KeyValue;
	void * KeyValue2;
	void * KeyValue3;
	void * GetKeyValue;
	void * Activate;
	void * SetParent;
	void * SetStasis;
	void * IsInStasis;
	void * ObjectCaps;
	void * GetUsePriority;
	void * GetGlowEntity;
	void * GetUseType;
	void * AcceptInput;
	void * GetPlayerName;
	void * DrawDebugGeometryOverlays;
	void * DrawDebugTextOverlays;
	void * Save;
	void * Restore;
	void * ShouldSavePhysics;
	void * OnSave;
	void * OnRestore;
	void * GetDemoRecordingState;
	void * RequiredEdictIndex;
	void * MoveDone;
	void * Think;
	NetworkVar_iface m_nNextThinkTick;
	void * GetBaseAnimating;
	void * GetBaseAnimatingOverlay;
	void * GetResponseSystem;
	void * DispatchResponse;
	void * Classify;
	void * DeathNotice;
	void * ShouldAttractAutoAim;
	void * GetAutoAimRadius;
	void * GetAutoAimCenter;
	void * GetBeamTraceFilter;
	void * PassesDamageFilter;
	void * TraceAttack;
	void * CanBeHitByMeleeAttack;
	void * OnTakeDamage;
	void * TakeHealth;
	void * IsAlive;
	void * Event_Killed;
	void * Event_KilledOther;
	void * BloodColor;
	void * IsTriggered;
	void * IsNPC;
	void * MyCombatCharacterPointer;
	void * MyNextBotPointer;
	void * MyInfectedPointer;
	void * GetDelay;
	void * IsMoving;
	void * DamageDecal;
	void * DecalTrace;
	void * ImpactTrace;
	void * OnControls;
	void * HasTarget;
	void * IsPlayer;
	void * IsNetClient;
	void * IsTemplate;
	void * IsBaseObject;
	void * IsBaseTrain;
	void * IsElevator;
	void * IsBaseCombatWeapon;
	void * MyCombatWeaponPointer;
	void * GetServerVehicle;
	void * IsViewable;
	void * ChangeTeam;
	void * OnEntityEvent;
	void * CanStandOn;
	void * CanStandOn2;
	void * GetEnemy;
	void * GetEnemy2;
	void * Use;
	void * StartTouch;
	void * Touch;
	void * EndTouch;
	void * StartBlocked;
	void * Blocked;
	void * EndBlocked;
	void * PhysicsSimulate;
	void * PhysicsLandedOnGround;
	void * UpdateOnRemove;
	void * StopLoopingSounds;
	void * SUB_AllowedToFade;
	void * Teleport;
	void * NotifySystemEvent;
	void * MakeTracer;
	void * GetTracerAttachment;
	void * FireBullets;
	void * DoImpactEffect;
	void * Respawn;
	void * IsLockedByMaster;
	void * GetMaxHealth;
	void * ModifyOrAppendCriteria;
	void * ModifyOrAppendDerivedCriteria;
	NetworkVar_iface m_iMaxHealth;
	NetworkVar_iface m_iHealth;
	NetworkVar_iface m_lifeState;
	NetworkVar_iface m_takedamage;
	void * GetDamageType;
	void * GetDamage;
	void * SetDamage;
	void * EyePosition;
	void * EyeAngles;
	void * LocalEyeAngles;
	void * EarPosition;
	void * BodyTarget;
	void * HeadTarget;
	void * GetVectors;
	void * GetViewOffset;
	void * SetViewOffset;
	void * GetSmoothedVelocity;
	void * GetVelocity;
	void * GetFriction;
	void * FVisible;
	void * FVisible2;
	void * CanBeSeenBy;
	void * GetAttackDamageScale;
	void * GetReceivedDamageScale;
	void * OnGroundChanged;
	void * GetGroundVelocityToApply;
	void * PhysicsSplash;
	void * Splash;
	void * WorldSpaceCenter;
	void * GetSoundEmissionOrigin;
	void * CreateVPhysics;
	void * ForceVPhysicsCollide;
	void * VPhysicsDestroyObject;
	void * VPhysicsUpdate;
	void * VPhysicsTakeDamage;
	void * VPhysicsShadowCollision;
	void * VPhysicsShadowUpdate;
	void * VPhysicsCollision;
	void * VPhysicsFriction;
	void * UpdatePhysicsShadowToCurrentPosition;
	void * VPhysicsGetObjectList;
	void * VPhysicsIsFlesh;
	void * CanPushEntity;
	void * HasPhysicsAttacker;
	void * PhysicsSolidMaskForEntity;
	void * ResolveFlyCollisionCustom;
	void * PerformCustomPhysics;
	void * GetStepOrigin;
	void * GetStepAngles;
	void * ShouldDrawWaterImpacts;
	NetworkVar_iface m_fFlags;
	NetworkVar_iface m_nWaterLevel;
	NetworkVar_iface m_hGroundEntity;
	NetworkVar_iface m_vecBaseVelocity;
	NetworkVar_iface m_flFriction;
	NetworkVar_iface m_vecVelocity;
	NetworkVar_iface m_bClientSideRagdoll;
	NetworkVar_iface m_vecViewOffset;
	void * RunVScripts;
};

struct CBaseAnimating_iface
{
	void * GetIdealSpeed;
	void * GetIdealAccel;
	void * StudioFrameAdvance;
	void * ReachedEndOfSequence;
	void * OnSequenceSet;
	void * IsActivityFinished;
	void * GetSequenceGroundSpeed;
	void * ClampRagdollForce;
	void * BecomeRagdollOnClient;
	void * IsRagdoll;
	void * CanBecomeRagdoll;
	void * GetSkeleton;
	void * GetBoneTransform;
	void * SetupBones;
	void * CalculateIKLocks;
	void * DispatchAnimEvents;
	void * HandleAnimEvent;
	void * PopulatePoseParameters;
	void * GetAttachment;
	void * InitBoneControllers;
	void * GetGroundSpeedVelocity;
	void * IsViewModel;
	void * Ignite;
	void * IgniteLifetime;
	void * IgniteUseCheapEffect;
	void * Extinguish;
	void * IsFrozen;
	void * Freeze;
	void * Unfreeze;
	void * Dissolve;
	void * SetLightingOrigin;
};

struct CBaseFlex_iface
{
	void * SetViewtarget;
	void * StartSceneEvent;
	void * ProcessSceneEvents;
	void * ProcessSceneEvent;
	void * ClearSceneEvent;
	void * CheckSceneEventCompletion;
	void * PlayScene;
	void * PlayAutoGeneratedSoundScene;
};

struct CBaseCombatCharacter_iface
{
	void * GetPhysicsImpactDamageTable;
	void * FInViewCone;
	void * FInViewCone2;
	void * FInAimCone;
	void * FInAimCone2;
	void * ShouldShootMissTarget;
	void * FindMissTarget;
	void * HandleInteraction;
	void * BodyAngles;
	void * BodyDirection2D;
	void * BodyDirection3D2;
	void * HeadDirection2D;
	void * HeadDirection3D2;
	void * EyeDirection2D;
	void * EyeDirection3D2;
	void * IsHiddenByFog;
	void * IsHiddenByFog2;
	void * IsHiddenByFog3;
	void * GetFogObscuredRatio;
	void * GetFogObscuredRatio2;
	void * GetFogObscuredRatio3;
	void * GetFogParams;
	void * IsLookingTowards;
	void * IsLookingTowards2;
	void * IsInFieldOfView;
	void * IsInFieldOfView2;
	void * IsLineOfSightClear;
	void * IsLineOfSightClear2;
	void * OnFootstep;
	void * GetGroundSurface;
	void * GetFootstepSound;
	void * AreFootstepsAudible;
	void * IsFootstepAudible;
	void * GetFootstepRunThreshold;
	void * GiveAmmo;
	void * RemoveAmmo;
	void * NPC_TranslateActivity;
	void * Weapon_TranslateActivity;
	void * Weapon_FrameUpdate;
	void * Weapon_HandleAnimEvent;
	void * Weapon_CanUse;
	void * Weapon_Equip;
	void * Weapon_EquipAmmoOnly;
	void * Weapon_Drop;
	void * Weapon_Switch;
	void * Weapon_ShootPosition;
	void * Weapon_CanSwitchTo;
	void * Weapon_SlotOccupied;
	void * Weapon_GetSlot;
	void * AddPlayerItem;
	void * RemovePlayerItem;
	void * CanBecomeServerRagdoll;
	void * OnTakeDamage_Alive;
	void * OnTakeDamage_Dying;
	void * OnTakeDamage_Dead;
	void * GetAliveDuration;
	void * OnFriendDamaged;
	void * NotifyFriendsOfDamage;
	void * HasEverBeenInjured;
	void * GetTimeSinceLastInjury;
	void * OnPlayerKilledOther;
	void * GetDeathActivity;
	void * CorpseGib;
	void * CorpseFade;
	void * HasHumanGibs;
	void * HasAlienGibs;
	void * ShouldGib;
	void * OnKilledNPC;
	void * Event_Gibbed;
	void * Event_Dying;
	void * BecomeRagdoll;
	void * FixupBurningServerRagdoll;
	void * BecomeRagdollBoogie;
	void * CheckTraceHullAttack;
	void * CheckTraceHullAttack2;
	void * PushawayTouch;
	void * IRelationType;
	void * IRelationPriority;
	void * IsInAVehicle;
	void * GetVehicle;
	void * GetVehicleEntity;
	void * ExitVehicle;
	void * CalcWeaponProficiency;
	void * GetAttackSpread;
	void * GetSpreadBias;
	void * DoMuzzleFlash;
	void * AddEntityRelationship;
	void * RemoveEntityRelationship;
	void * AddClassRelationship;
	void * OnChangeActiveWeapon;
	void * GetLastKnownArea;
	void * IsAreaTraversable;
	void * ClearLastKnownArea;
	void * UpdateLastKnownArea;
	void * OnNavAreaChanged;
	void * OnNavAreaRemoved;
	void * GetClass;
	void * CanBeA;
	void * OnHitByVomitJar;
	void * IsIT;
	void * OnPursuedBy;
	void * IsGhost;
	NetworkVar_iface m_iAmmo;
};

struct CBasePlayer_iface
{
	void * CreateViewModel;
	void * SetupVisibility;
	void * WantsLagCompensationOnEntity;
	void * SharedSpawn;
	void * ForceRespawn;
	void * InitialSpawn;
	void * InitHUD;
	void * ShowViewPortPanel;
	void * PlayerDeathThink;
	void * Jump;
	void * Duck;
	void * Cough;
	void * PreThink;
	void * PostThink;
	void * DamageEffect;
	void * OnDamagedByExplosion;
	void * ShouldFadeOnDeath;
	void * IsFakeClient;
	void * GetCharacterDisplayName;
	void * GetPlayerMins;
	void * GetPlayerMaxs;
	void * UpdateCollisionBounds;
	void * CalcRoll;
	void * PackDeadPlayerItems;
	void * RemoveAllItems;
	void * IsRunning;
	void * Weapon_SetLast;
	void * Weapon_ShouldSetLast;
	void * Weapon_ShouldSelectItem;
	void * HasUnlockableWeapons;
	void * UpdateClientData;
	void * UpdateBattery;
	void * ExitLadder;
	void * GetLadderSurface;
	void * IsAbleToAutoCenterOnLadders;
	void * SetFlashlightEnabled;
	void * FlashlightIsOn;
	void * FlashlightTurnOn;
	void * FlashlightTurnOff;
	void * IsIlluminatedByFlashlight;
	void * UpdateStepSound;
	void * PlayStepSound;
	void * GetStepSoundVelocities;
	void * SetStepSoundTime;
	void * DeathSound;
	void * GetSoundscapeListener;
	void * WeaponHasInfiniteAmmo;
	void * SetAnimation;
	void * OnMainActivityComplete;
	void * OnMainActivityInterrupted;
	void * ImpulseCommands;
	void * CheatImpulseCommands;
	void * ClientCommand;
	void * StartObserverMode;
	void * StopObserverMode;
	void * ModeWantsSpectatorGUI;
	void * SetObserverMode;
	void * GetObserverMode;
	void * SetObserverTarget;
	void * ObserverUse;
	void * GetObserverTarget;
	void * FindNextObserverTarget;
	void * GetNextObserverSearchStartPoint;
	void * PassesObserverFilter;
	void * IsValidObserverTarget;
	void * CheckObserverSettings;
	void * JumptoPosition;
	void * ForceObserverMode;
	void * ResetObserverMode;
	void * ValidateCurrentObserverTarget;
	void * AttemptToExitFreezeCam;
	void * WantsRoamingObserverMode;
	void * StartReplayMode;
	void * StopReplayMode;
	void * GetDelayTicks;
	void * GetReplayEntity;
	void * CreateCorpse;
	void * EntSelectSpawnPoint;
	void * GetInVehicle;
	void * LeaveVehicle;
	void * OnVehicleStart;
	void * OnVehicleEnd;
	void * BumpWeapon;
	void * SelectLastItem;
	void * SelectItem;
	void * SelectItem2;
	void * ItemPostFrame;
	void * GiveNamedItem;
	void * CheckTrainUpdate;
	void * SetPlayerUnderwater;
	void * PlayWadeSound;
	void * CanBreatheUnderwater;
	void * CanRecoverCurrentDrowningDamage;
	void * PlayerUse;
	void * PlayUseDenySound;
	void * FindUseEntity;
	void * IsUseableEntity;
	void * OnUseEntity;
	void * PickupObject;
	void * ForceDropOfCarriedPhysObjects;
	void * GetHeldObjectMass;
	void * IsHoldingEntity;
	void * UpdateGeigerCounter;
	void * GetAutoaimVector;
	void * GetAutoaimVector2;
	void * GetAutoaimVector3;
	void * GetAutoaimVector4;
	void * ShouldAutoaim;
	void * ForceClientDllUpdate;
	void * ProcessUsercmds;
	void * PlayerRunCommand;
	void * ChangeTeam;
	void * CanHearAndReadChatFrom;
	void * CanSpeak;
	void * ModifyOrAppendPlayerCriteria;
	void * CheckChatText;
	void * CreateRagdollEntity;
	void * ShouldAnnounceAchievement;
	void * ForceChangeTeam;
	void * IsFollowingPhysics;
	void * InitVCollision;
	void * UpdatePhysicsShadowToCurrentPosition;
	void * Hints;
	void * IsReadyToPlay;
	void * IsReadyToSpawn;
	void * ShouldGainInstantSpawn;
	void * ResetPerRoundStats;
	void * ResetScores;
	void * EquipSuit;
	void * RemoveSuit;
	void * OnUseEntityChanged;
	void * CommitSuicide;
	void * CommitSuicide2;
	void * IsBot;
	void * GetExpresser;
	void * SpawnArmorValue;
	void * UpdateTonemapController;
	NetworkVar_iface m_ArmorValue;
	void * IsAutoCrouched;
	void * GetAvailableSteadyStateSlots;
	void * OnSpeak;
	void * OnVoiceTransmit;
	void * PlayerSolidMask;
};

// CAI_ExpressorHost<CBasePlayer>
struct CAI_ExpresserHost_CBasePlayer__iface
{
	void * NoteSpreaking;
	void * Speak;
	void * Speak2;
	void * PostSpeakDispatchResponse;
};

struct CBaseMultiplayerPlayer_iface
{
	void * SpeakIfAllowed;
	void * SpeakConceptIfAllowed;
	void * CanSpeakVoiceCommand;
	void * ShouldShowVoiceSubtitleToEnemy;
	void * NoteSpokeVoiceCommand;
	void * OnAchievementEarned;
	void * GetMultiplayerExpresser;
	void * CalculateTeamBalanceScore;
	void * CreateExpresser;
};

struct CCSPlayer_iface
{
	void * FirePlayerHurtEvent;
	void * OnTakeDamageInternal;
	void * AllowDamage;
	void * GetHealthBuffer;
	void * IsIncapacitated;
	void * GetAdjustedDamage;
	void * DoBloodEffect;
	void * GiveNamedItem;
	void * IsBeingGivenItem;
	void * DoAnimationEvent;
	void * KickBack;
	void * IsImmobilized;
	void * GiveDefaultItems;
	void * RoundRespawn;
	void * ObserverRoundRespawn;
	void * Blind;
	void * Deafen;
	void * ResetMaxSpeed;
	void * HandleCommand_JoinClass;
	void * HandleCommand_JoinTeam;
	void * GetIntoGame;
	void * WantsMOTD;
	void * AutoSelectTeam;
	void * OnLeaveActiveState;
	void * Pain;
	void * OnTeamChanged;
	void * CanAttack;
	void * OnWeaponFired;
	void * QueueScreenBloodSplatter;
	void * OnReloadStart;
	void * CreateNoise;
	void * OnPreThinkObserverMode;
	void * OnEnterRescueState;
	void * OnPreThinkRescueState;
	void * OnLeaveRescueState;
	void * OnEnterGhostState;
	void * OnPreThinkGhostState;
	void * OnLeaveGhostState;
	void * OnEnterIntroCameraState;
	void * OnPreThinkIntroCameraState;
	void * OnLeaveIntroCameraState;
	void * OnLeaveDeathAnimState;
	void * OnLeaveDeathWaitForKeyState;
	void * CanUseFlashlight;
	void * UpdateAddonBits;
	void * UpdateRadar;
	void * SelectDeathPose;
	void * CanChangeName;
	void * ChangeName;
	void * IsProgressBarActive;
	void * CreateRagdollEntity;
	void * GetRagdollType;
	void * SetModelFromClass;
	void * SetModelFromClassAtSpawn;
	void * DropWeapons;
	void * RecordDamageTaken;
};

struct CTerrorPlayer_iface
{
	void * OnPlayerDisconnected;
	void * OnSpawn;
	void * RestoreSpawn;
	void * OnBeginChangeLevel;
	void * OnEndChangeLevel;
	void * HandleCommand_JoinTeam;
	void * SetDoingRestore;
	void * GetTeamSwitchRule;
	void * IsReadyToShove;
	void * SetNextShoveTime;
	void * CommitSuicide;
	void * OnSpokeConcept;
	void * RestoreWeapons;
	void * DropWeaponInSlot;
	void * QueueScreenBloodSplatter;
	void * OnReloadEnd;
	void * OnReloadAbort;
	void * OnAttackSuccess;
	void * CanBeShoved;
	void * IsWielding;
	void * IsWieldingWeaponOfType;
	void * IsZoomed;
	void * CanPlayerJump;
	void * PlayerZombieAbortControl;
	void * CanBeShoved;
	void * SetClass;
	void * SetCharacter;
	void * OnRevived;
	void * OnAwardEarned;
	void * OnAwardLost;
	void * ScoreKilledZombie;
};

struct CBaseEntity_vtable
{
	void * dtor1;
	void * dtor0;
	IHandleEntity_iface IHandleEntity;
	IServerUnknown_iface IServerUnknown;
	IServerEntity_iface IServerEntity;
	CBaseEntity_iface CBaseEntity;
};

struct CTerrorPlayer_vtable
{
	void * dtor1;
	void * dtor0;
	IHandleEntity_iface IHandleEntity;
	IServerUnknown_iface IServerUnknown;
	IServerEntity_iface IServerEntity;
	CBaseEntity_iface CBaseEntity;
	CBaseAnimating_iface CBaseAnimating;
	CBaseFlex_iface CBaseFlex;
	CBaseCombatCharacter_iface CBaseCombatCharacter;
	CBasePlayer_iface CBasePlayer;
	CAI_ExpresserHost_CBasePlayer__iface CAI_ExpresserHost;
	CBaseMultiplayerPlayer_iface CBaseMultiplayerPlayer;
	CCSPlayer_iface CCSPlayer;
	CTerrorPlayer_iface CTerrorPlayer;
};

struct CAI_ExpresserSink_vtable
{
	void * OnSpokeConcept;
	void * OnStartSpeaking;
	void * UseSemaphore;
};

#endif // _INCLUDE_TERROR_PLAYER_VTABLES_H_