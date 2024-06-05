using System;
namespace blazedumper {
    public static class BaseEntity_TypeInfo
    {
    public const Int32 offset = 0x3C25B80;
    }
    public static class Facepunch_Input_TypeInfo
    {
    public const Int32 offset = 0x3BF9F10;
    }
    public static class MainCamera_TypeInfo
    {
    public const Int32 offset = 0x3C12298;
    }
    public static class System_Collections_Generic_List_BaseGameMode_TypeInfo
    {
    public const Int32 offset = 0x3C552C8;
    }
    public static class BaseGameMode_TypeInfo
    {
    public const Int32 offset = 0x3C25DE0;
    }
    public static class BasePlayer
    {
        public const Int32 __menuOption_Climb = 0x290; // Option
        public const Int32 __menuOption_Drink = 0x308; // Option
        public const Int32 __menuOption_InviteToClan = 0x380; // Option
        public const Int32 __menuOption_InviteToTeam = 0x3F8; // Option
        public const Int32 __menuOption_Menu_AssistPlayer = 0x470; // Option
        public const Int32 __menuOption_Menu_LootPlayer = 0x4E8; // Option
        public const Int32 __menuOption_SaltWater = 0x560; // Option
        public const Int32 clanId = 0x5D8; // long
        public const Int32 playerModel = 0x5E0; // PlayerModel
        public const Int32 Frozen = 0x5E8; // bool
        public const Int32 LookLocked = 0x5E9; // bool
        public const Int32 voiceRecorder = 0x5F0; // PlayerVoiceRecorder
        public const Int32 voiceSpeaker = 0x5F8; // PlayerVoiceSpeaker
        public const Int32 input = 0x600; // PlayerInput
        public const Int32 movement = 0x608; // BaseMovement
        public const Int32 collision = 0x610; // BaseCollision
        public const Int32 bagCount = 0x618; // int
        public const Int32 shelterCount = 0x61C; // int
        public const Int32 modelInitUnderwear = 0x620; // uint
        public const Int32 _lookingAt = 0x628; // GameObject
        public const Int32 _lookingAtEntity = 0x630; // BaseEntity
        public const Int32 _lookingAtCollider = 0x638; // Collider
        public const Int32 lookingAtPoint = 0x640; // Vector3
        public const Int32 wakeTime = 0x64C; // float
        public const Int32 needsClothesRebuild = 0x650; // bool
        public const Int32 wasSleeping = 0x651; // bool
        public const Int32 wokeUpBefore = 0x652; // bool
        public const Int32 wasDead = 0x653; // bool
        public const Int32 HasMountedClothing = 0x654; // bool
        public const Int32 HasWearableClothing = 0x655; // bool
        public const Int32 lastClothesHash = 0x658; // uint
        public const Int32 lastOpenSoundPlay = 0x65C; // TimeSince
        public const Int32 currentViewMode = 0x660; // BasePlayer.CameraMode
        public const Int32 selectedViewMode = 0x664; // BasePlayer.CameraMode
        public const Int32 lastRevivePoint = 0x668; // Vector3
        public const Int32 lastReviveDirection = 0x674; // Vector3
        public const Int32 IsWearingDiveGoggles = 0x680; // bool
        public const Int32 GestureViewModel = 0x688; // ViewModel
        public const Int32 currentClientRespawnInformation = 0x690; // RespawnInformation
        public const Int32 respawnOptionsTimestamp = 0x698; // float
        public const Int32 lastParachuteRequest = 0x69C; // TimeSince
        public const Int32 timeSinceUpdatedLookingAt = 0x6A0; // RealTimeSince
        public const Int32 nextTopologyTestTime = 0x6A4; // float
        public const Int32 usePressTime = 0x6A8; // float
        public const Int32 useHeldTime = 0x6AC; // float
        public const Int32 lookingAtTest = 0x6B0; // HitTest
        public const Int32 cachedWaterDrinkingPoint = 0x6B8; // Vector3
        public const Int32 hasRequestedServerEmoji = 0x6C4; // bool
        public const Int32 gestureList = 0x6D8; // GestureCollection
        public const Int32 gestureFinishedTime = 0x6E0; // TimeUntil
        public const Int32 blockHeldInputTimer = 0x6E4; // TimeSince
        public const Int32 currentGesture = 0x6E8; // GestureConfig
        public const Int32 disabledHeldEntity = 0x6F0; // HeldEntity
        public const Int32 nextGestureMenuOpenTime = 0x6F8; // float
        public const Int32 lastGestureCancel = 0x6FC; // TimeSince
        public const Int32 client_lastHelloTime = 0x700; // float
        public const Int32 currentTeam = 0x708; // ulong
        public const Int32 clientTeam = 0x710; // PlayerTeam
        public const Int32 lastReceivedTeamTime = 0x720; // float
        public const Int32 lastPresenceTeamId = 0x728; // ulong
        public const Int32 lastPresenceTeamSize = 0x730; // int
        public const Int32 playerGroupKey = 0x738; // string
        public const Int32 playerGroupSizeKey = 0x740; // string
        public const Int32 clActiveItem = 0x748; // ItemId
        public const Int32 ClientCurrentMapNotes = 0x750; // List<MapNote>
        public const Int32 ClientCurrentDeathNote = 0x758; // MapNote
        public const Int32 keepOpenMapInterface = 0x760; // bool
        public const Int32 missions = 0x768; // List<BaseMission.MissionInstance>
        public const Int32 _activeMission = 0x770; // int
        public const Int32 modelState = 0x778; // ModelState
        public const Int32 mounted = 0x780; // EntityRef
        public const Int32 nextSeatSwapTime = 0x790; // float
        public const Int32 mountInputHeldDuringDismount = 0x794; // bool
        public const Int32 PetEntity = 0x798; // BaseEntity
        public const Int32 lastPetCommandIssuedTime = 0x7A0; // float
        public const Int32 PetPrefabID = 0x7A4; // uint
        public const Int32 PetID = 0x7A8; // NetworkableId
        public const Int32 ClientCurrentPings = 0x7B0; // List<MapNote>
        public const Int32 tapInProcess = 0x7B8; // bool
        public const Int32 lastPingTap = 0x7BC; // TimeSince
        public const Int32 cachedBuildingPrivilegeTime = 0x7C0; // float
        public const Int32 cachedBuildingPrivilege = 0x7C8; // BuildingPrivlidge
        public const Int32 cachedVehicleBuildingBlockedTime = 0x7D0; // float
        public const Int32 cachedVehicleBuildingBlocked = 0x7D4; // bool
        public const Int32 cachedEntityBuildingBlockedTime = 0x7D8; // float
        public const Int32 cachedEntityBuildingBlocked = 0x7DC; // bool
        public const Int32 cachedPrivilegeFromOther = 0x7E0; // BaseEntity
        public const Int32 cachedPrivilegeFromOtherTime = 0x7E8; // float
        public const Int32 maxProjectileID = 0x7EC; // int
        public const Int32 lastSpectateCameraUpdate = 0x7F0; // TimeSince
        public const Int32 lastUpdateTime = 0x7F4; // float
        public const Int32 cachedThreatLevel = 0x7F8; // float
        public const Int32 lastSentTickTime = 0x7FC; // float
        public const Int32 lastTickStopwatch = 0x800; // Stopwatch
        public const Int32 lastSentTick = 0x808; // PlayerTick
        public const Int32 CurrentTutorialAllowance = 0x810; // BasePlayer.TutorialItemAllowance
        public const Int32 startTutorialCooldown = 0x814; // float
        public const Int32 nextVisThink = 0x818; // float
        public const Int32 lastTimeSeen = 0x81C; // float
        public const Int32 debugPrevVisible = 0x820; // bool
        public const Int32 fallDamageEffect = 0x828; // GameObjectRef
        public const Int32 drownEffect = 0x830; // GameObjectRef
        public const Int32 playerFlags = 0x838; // BasePlayer.PlayerFlags
        public const Int32 eyes = 0x840; // PlayerEyes
        public const Int32 inventory = 0x848; // PlayerInventory
        public const Int32 blueprints = 0x850; // PlayerBlueprints
        public const Int32 metabolism = 0x858; // PlayerMetabolism
        public const Int32 modifiers = 0x860; // PlayerModifiers
        public const Int32 playerCollider = 0x868; // CapsuleCollider
        public const Int32 Belt = 0x870; // PlayerBelt
        public const Int32 playerRigidbody = 0x878; // Rigidbody
        public const Int32 userID = 0x880; // ulong
        public const Int32 UserIDString = 0x888; // string
        public const Int32 gamemodeteam = 0x890; // int
        public const Int32 reputation = 0x894; // int
        public const Int32 _displayName = 0x898; // string
        public const Int32 _lastSetName = 0x8A0; // string
        public const Int32 playerColliderStanding = 0x8A8; // BasePlayer.CapsuleColliderInfo
        public const Int32 playerColliderDucked = 0x8BC; // BasePlayer.CapsuleColliderInfo
        public const Int32 playerColliderCrawling = 0x8D0; // BasePlayer.CapsuleColliderInfo
        public const Int32 playerColliderLyingDown = 0x8E4; // BasePlayer.CapsuleColliderInfo
        public const Int32 cachedProtection = 0x8F8; // ProtectionProperties
        public const Int32 lastHeadshotSoundTime = 0x900; // float
        public const Int32 nextColliderRefreshTime = 0x904; // float
        public const Int32 weaponMoveSpeedScale = 0x908; // float
        public const Int32 clothingBlocksAiming = 0x90C; // bool
        public const Int32 clothingMoveSpeedReduction = 0x910; // float
        public const Int32 clothingWaterSpeedBonus = 0x914; // float
        public const Int32 clothingAccuracyBonus = 0x918; // float
        public const Int32 equippingBlocked = 0x91C; // bool
        public const Int32 eggVision = 0x920; // float
        public const Int32 activeTelephone = 0x928; // PhoneController
        public const Int32 designingAIEntity = 0x930; // BaseEntity
    }
    public static class BaseEntity
    {
        public const Int32 ragdoll = 0x80; // Ragdoll
        public const Int32 positionLerp = 0x88; // PositionLerp
        public const Int32 ClientNetworkTime = 0x90; // float
        public const Int32 menuOptions = 0x98; // List<Option>
        public const Int32 bounds = 0xA0; // Bounds
        public const Int32 impactEffect = 0xB8; // GameObjectRef
        public const Int32 enableSaving = 0xC0; // bool
        public const Int32 syncPosition = 0xC1; // bool
        public const Int32 model = 0xC8; // Model
        public const Int32 flags = 0xD0; // BaseEntity.Flags
        public const Int32 parentBone = 0xD4; // uint
        public const Int32 skinID = 0xD8; // ulong
        public const Int32 _components = 0xE0; // EntityComponentBase[]
        public const Int32 HasBrain = 0xE8; // bool
        public const Int32 _name = 0xF0; // string
        public const Int32 OwnerID = 0xF8; // ulong
        public const Int32 broadcastProtocol = 0x100; // uint
        public const Int32 links = 0x108; // List<EntityLink>
        public const Int32 linkedToNeighbours = 0x110; // bool
        public const Int32 _pendingFileRequests = 0x118; // List<BaseEntity.PendingFileRequest>
        public const Int32 updateParentingAction = 0x120; // Action
        public const Int32 addedToParentEntity = 0x128; // BaseEntity
        public const Int32 itemSkin = 0x130; // ItemSkin
        public const Int32 successCallback = 0x138; // Action
        public const Int32 failureCallback = 0x140; // Action
        public const Int32 entitySlots = 0x148; // EntityRef[]
        public const Int32 triggers = 0x150; // List<TriggerBase>
        public const Int32 isVisible = 0x158; // bool
        public const Int32 isAnimatorVisible = 0x159; // bool
        public const Int32 isShadowVisible = 0x15A; // bool
        public const Int32 localOccludee = 0x160; // OccludeeSphere
        public const Int32 Weight = 0x180; // float
    }
    public static class BaseCombatEntity
    {
        public const Int32 __menuOption_Menu_Pickup = 0x188; // Option
        public const Int32 skeletonProperties = 0x200; // SkeletonProperties
        public const Int32 baseProtection = 0x208; // ProtectionProperties
        public const Int32 startHealth = 0x210; // float
        public const Int32 pickup = 0x218; // BaseCombatEntity.Pickup
        public const Int32 repair = 0x240; // BaseCombatEntity.Repair
        public const Int32 ShowHealthInfo = 0x270; // bool
        public const Int32 lifestate = 0x274; // BaseCombatEntity.LifeState
        public const Int32 sendsHitNotification = 0x278; // bool
        public const Int32 sendsMeleeHitNotification = 0x279; // bool
        public const Int32 markAttackerHostile = 0x27A; // bool
        public const Int32 _health = 0x27C; // float
        public const Int32 _maxHealth = 0x280; // float
        public const Int32 faction = 0x284; // BaseCombatEntity.Faction
        public const Int32 deathTime = 0x288; // float
        public const Int32 lastNotifyFrame = 0x28C; // int
    }
    public static class BuildingPrivlidge
    {
        public const Int32 __menuOption_Menu_AssignToFriend = 0x4A0; // Option
        public const Int32 __menuOption_Menu_MaxAuth = 0x518; // Option
        public const Int32 __menuOption_Menu_RotateVM = 0x590; // Option
        public const Int32 __menuOption_MenuAuthorize = 0x608; // Option
        public const Int32 __menuOption_MenuClearList = 0x680; // Option
        public const Int32 __menuOption_MenuDeauthorize = 0x6F8; // Option
        public const Int32 assignDialog = 0x770; // GameObject
        public const Int32 allowedConstructionItems = 0x780; // List<ItemDefinition>
        public const Int32 cachedProtectedMinutes = 0x788; // float
        public const Int32 cachedUpkeepPeriodMinutes = 0x78C; // float
        public const Int32 cachedUpkeepCostFraction = 0x790; // float
        public const Int32 clientAuthed = 0x794; // bool
        public const Int32 clientAnyAuthed = 0x795; // bool
        public const Int32 lastProtectedMinuteUpdate = 0x798; // DateTime
    }
    public static class BaseProjectile
    {
        public const Int32 NoiseRadius = 0x2A0; // float
        public const Int32 damageScale = 0x2A4; // float
        public const Int32 distanceScale = 0x2A8; // float
        public const Int32 projectileVelocityScale = 0x2AC; // float
        public const Int32 automatic = 0x2B0; // bool
        public const Int32 usableByTurret = 0x2B1; // bool
        public const Int32 turretDamageScale = 0x2B4; // float
        public const Int32 attackFX = 0x2B8; // GameObjectRef
        public const Int32 silencedAttack = 0x2C0; // GameObjectRef
        public const Int32 muzzleBrakeAttack = 0x2C8; // GameObjectRef
        public const Int32 MuzzlePoint = 0x2D0; // Transform
        public const Int32 reloadTime = 0x2D8; // float
        public const Int32 canUnloadAmmo = 0x2DC; // bool
        public const Int32 primaryMagazine = 0x2E0; // BaseProjectile.Magazine
        public const Int32 fractionalReload = 0x2E8; // bool
        public const Int32 reloadStartDuration = 0x2EC; // float
        public const Int32 reloadFractionDuration = 0x2F0; // float
        public const Int32 reloadEndDuration = 0x2F4; // float
        public const Int32 aimSway = 0x2F8; // float
        public const Int32 aimSwaySpeed = 0x2FC; // float
        public const Int32 recoil = 0x300; // RecoilProperties
        public const Int32 aimconeCurve = 0x308; // AnimationCurve
        public const Int32 aimCone = 0x310; // float
        public const Int32 hipAimCone = 0x314; // float
        public const Int32 aimconePenaltyPerShot = 0x318; // float
        public const Int32 aimConePenaltyMax = 0x31C; // float
        public const Int32 aimconePenaltyRecoverTime = 0x320; // float
        public const Int32 aimconePenaltyRecoverDelay = 0x324; // float
        public const Int32 stancePenaltyScale = 0x328; // float
        public const Int32 hasADS = 0x32C; // bool
        public const Int32 noAimingWhileCycling = 0x32D; // bool
        public const Int32 manualCycle = 0x32E; // bool
        public const Int32 needsCycle = 0x32F; // bool
        public const Int32 isCycling = 0x330; // bool
        public const Int32 aiming = 0x331; // bool
        public const Int32 useEmptyAmmoState = 0x332; // bool
        public const Int32 isBurstWeapon = 0x333; // bool
        public const Int32 canChangeFireModes = 0x334; // bool
        public const Int32 defaultOn = 0x335; // bool
        public const Int32 internalBurstRecoilScale = 0x338; // float
        public const Int32 internalBurstFireRateScale = 0x33C; // float
        public const Int32 internalBurstAimConeScale = 0x340; // float
        public const Int32 resetDuration = 0x344; // float
        public const Int32 numShotsFired = 0x348; // int
        public const Int32 nextReloadTime = 0x34C; // float
        public const Int32 startReloadTime = 0x350; // float
        public const Int32 stancePenalty = 0x354; // float
        public const Int32 aimconePenalty = 0x358; // float
        public const Int32 cachedModHash = 0x35C; // uint
        public const Int32 sightAimConeScale = 0x360; // float
        public const Int32 sightAimConeOffset = 0x364; // float
        public const Int32 hipAimConeScale = 0x368; // float
        public const Int32 hipAimConeOffset = 0x36C; // float
        public const Int32 isReloading = 0x370; // bool
        public const Int32 timeSinceReloadFinished = 0x374; // TimeSince
        public const Int32 swaySampleTime = 0x378; // float
        public const Int32 lastShotTime = 0x37C; // float
        public const Int32 reloadPressTime = 0x380; // float
        public const Int32 ammoTypePreReload = 0x388; // ItemDefinition
        public const Int32 fractionalReloadDesiredCount = 0x390; // int
        public const Int32 fractionalReloadNumAdded = 0x394; // int
        public const Int32 currentBurst = 0x398; // int
        public const Int32 triggerReady = 0x39C; // bool
        public const Int32 nextHeightCheckTime = 0x3A0; // float
        public const Int32 cachedUnderground = 0x3A4; // bool
        public const Int32 createdProjectiles = 0x3A8; // List<Projectile>
    }
    public static class Magazine
    {
        public const Int32 definition = 0x10; // BaseProjectile.Magazine.Definition
        public const Int32 capacity = 0x18; // int
        public const Int32 contents = 0x1C; // int
        public const Int32 ammoType = 0x20; // ItemDefinition
        public const Int32 allowPlayerReloading = 0x28; // bool
        public const Int32 allowAmmoSwitching = 0x29; // bool
    }
    public static class PlayerInventory
    {
        public const Int32 containerMain = 0x28; // ItemContainer
        public const Int32 containerBelt = 0x30; // ItemContainer
        public const Int32 containerWear = 0x38; // ItemContainer
        public const Int32 crafting = 0x40; // ItemCrafter
        public const Int32 loot = 0x48; // PlayerLoot
        public const Int32 lastSet = 0x50; // List<ItemIcon>
        public const Int32 cachedResult = 0x58; // PlayerInventory.WearCheckResult
        public const Int32 returnItems = 0x68; // List<Item>
    }
    public static class ItemContainer
    {
        public const Int32 flags = 0x10; // ItemContainer.Flag
        public const Int32 allowedContents = 0x14; // ItemContainer.ContentsType
        public const Int32 onlyAllowedItems = 0x18; // ItemDefinition[]
        public const Int32 availableSlots = 0x28; // List<ItemSlot>
        public const Int32 capacity = 0x30; // int
        public const Int32 uid = 0x38; // ItemContainerId
        public const Int32 dirty = 0x40; // bool
        public const Int32 itemList = 0x48; // List<Item>
        public const Int32 temperature = 0x50; // float
        public const Int32 parent = 0x58; // Item
        public const Int32 playerOwner = 0x60; // BasePlayer
        public const Int32 entityOwner = 0x68; // BaseEntity
        public const Int32 isServer = 0x70; // bool
        public const Int32 maxStackSize = 0x74; // int
        public const Int32 containerVolume = 0x78; // int
    }
    public static class PlayerModel
    {
        public const Int32 collision = 0x20; // BoxCollider
        public const Int32 censorshipCube = 0x28; // GameObject
        public const Int32 censorshipCubeBreasts = 0x30; // GameObject
        public const Int32 jawBone = 0x38; // GameObject
        public const Int32 neckBone = 0x40; // GameObject
        public const Int32 headBone = 0x48; // GameObject
        public const Int32 eyeController = 0x50; // EyeController
        public const Int32 blinkController = 0x58; // EyeBlink
        public const Int32 SpineBones = 0x60; // Transform[]
        public const Int32 leftFootBone = 0x68; // Transform
        public const Int32 rightFootBone = 0x70; // Transform
        public const Int32 leftHandPropBone = 0x78; // Transform
        public const Int32 rightHandPropBone = 0x80; // Transform
        public const Int32 rightHandTarget = 0x88; // Vector3
        public const Int32 isPreview = 0x94; // bool
        public const Int32 leftHandTargetPosition = 0x98; // Vector3
        public const Int32 leftHandTargetRotation = 0xA4; // Quaternion
        public const Int32 rightHandTargetPosition = 0xB4; // Vector3
        public const Int32 rightHandTargetRotation = 0xC0; // Quaternion
        public const Int32 steeringTargetDegrees = 0xD0; // float
        public const Int32 rightFootTargetPosition = 0xD4; // Vector3
        public const Int32 rightFootTargetRotation = 0xE0; // Quaternion
        public const Int32 leftFootTargetPosition = 0xF0; // Vector3
        public const Int32 leftFootTargetRotation = 0xFC; // Quaternion
        public const Int32 CinematicAnimationController = 0x110; // RuntimeAnimatorController
        public const Int32 DefaultAvatar = 0x118; // Avatar
        public const Int32 CinematicAvatar = 0x120; // Avatar
        public const Int32 DefaultHoldType = 0x128; // RuntimeAnimatorController
        public const Int32 SleepGesture = 0x130; // RuntimeAnimatorController
        public const Int32 CrawlToIncapacitatedGesture = 0x138; // RuntimeAnimatorController
        public const Int32 StandToIncapacitatedGesture = 0x140; // RuntimeAnimatorController
        public const Int32 CurrentGesture = 0x148; // RuntimeAnimatorController
        public const Int32 MaleSkin = 0x150; // SkinSetCollection
        public const Int32 FemaleSkin = 0x158; // SkinSetCollection
        public const Int32 subsurfaceProfile = 0x160; // SubsurfaceProfile
        public const Int32 voiceVolume = 0x168; // float
        public const Int32 skinColor = 0x16C; // float
        public const Int32 skinNumber = 0x170; // float
        public const Int32 meshNumber = 0x174; // float
        public const Int32 hairNumber = 0x178; // float
        public const Int32 skinType = 0x17C; // int
        public const Int32 movementSounds = 0x180; // MovementSounds
        public const Int32 showSash = 0x188; // bool
        public const Int32 tempPoseType = 0x18C; // int
        public const Int32 underwearSkin = 0x190; // uint
        public const Int32 overrideSkinSeed = 0x198; // ulong
        public const Int32 AimAngles = 0x1A0; // Quaternion
        public const Int32 LookAngles = 0x1B0; // Quaternion
        public const Int32 modelState = 0x1C0; // ModelState
        public const Int32 position = 0x1C8; // Vector3
        public const Int32 velocity = 0x1D4; // Vector3
        public const Int32 speedOverride = 0x1E0; // Vector3
        public const Int32 newVelocity = 0x1EC; // Vector3
        public const Int32 rotation = 0x1F8; // Quaternion
        public const Int32 mountedRotation = 0x208; // Quaternion
        public const Int32 fallingTime = 0x218; // float
        public const Int32 smoothLeftFootIK = 0x21C; // Vector3
        public const Int32 smoothRightFootIK = 0x228; // Vector3
        public const Int32 drawShadowOnly = 0x234; // bool
        public const Int32 isIncapacitated = 0x235; // bool
        public const Int32 flinchLocation = 0x238; // uint
        public const Int32 visible = 0x23C; // bool
        public const Int32 nameTag = 0x240; // PlayerNameTag
        public const Int32 animatorNeedsWarmup = 0x248; // bool
        public const Int32 isLocalPlayer = 0x249; // bool
        public const Int32 aimSoundDef = 0x250; // SoundDefinition
        public const Int32 aimEndSoundDef = 0x258; // SoundDefinition
        public const Int32 InGesture = 0x260; // bool
        public const Int32 CurrentGestureConfig = 0x268; // GestureConfig
        public const Int32 InCinematic = 0x270; // bool
        public const Int32 defaultAnimatorController = 0x278; // RuntimeAnimatorController
        public const Int32 _multiMesh = 0x280; // SkinnedMultiMesh
        public const Int32 _animator = 0x288; // Animator
        public const Int32 _lodGroup = 0x290; // LODGroup
        public const Int32 _currentGesture = 0x298; // RuntimeAnimatorController
        public const Int32 holdTypeLock = 0x2A0; // float
        public const Int32 hasHeldEntity = 0x2A4; // bool
        public const Int32 wasMountedRightAim = 0x2A5; // bool
        public const Int32 cachedMask = 0x2A8; // int
        public const Int32 cachedConstructionMask = 0x2AC; // int
        public const Int32 WorkshopHeldEntity = 0x2B0; // HeldEntity
        public const Int32 wasCrawling = 0x2B8; // bool
        public const Int32 mountedSpineLookWeight = 0x2BC; // float
        public const Int32 mountedAnimSpeed = 0x2C0; // float
        public const Int32 preserveBones = 0x2C4; // bool
        public const Int32 blendShapeControllers = 0x2D0; // List<BlendShapeController>
        public const Int32 IsNpc = 0x2D8; // bool
        public const Int32 timeSinceReactionStart = 0x2DC; // TimeSince
        public const Int32 timeSinceLeftFootTest = 0x2E0; // TimeSince
        public const Int32 cachedLeftFootPos = 0x2E4; // Vector3
        public const Int32 cachedLeftFootNormal = 0x2F0; // Vector3
        public const Int32 timeSinceRightFootTest = 0x2FC; // TimeSince
        public const Int32 cachedRightFootPos = 0x300; // Vector3
        public const Int32 cachedRightFootNormal = 0x30C; // Vector3
        public const Int32 _smoothAimWeight = 0x318; // float
        public const Int32 _smoothVelocity = 0x31C; // float
        public const Int32 _smoothlookAngle = 0x320; // Vector3
        public const Int32 allowMountedHeadLook = 0x32C; // bool
        public const Int32 overrideLeftHandIkWeight = 0x330; // float
        public const Int32 overrideRightHandIkWeight = 0x334; // float
        public const Int32 smoothLookDir = 0x338; // Vector3
        public const Int32 lastSafeLookDir = 0x344; // Vector3
        public const Int32 cinematicLookAt = 0x350; // Vector3
        public const Int32 lastCinematicLookAt = 0x35C; // Vector3
        public const Int32 cinematicLookAtWeight = 0x368; // float
        public const Int32 cinematicTargetWeight = 0x36C; // float
        public const Int32 Shoulders = 0x370; // Transform[]
        public const Int32 AdditionalSpineBones = 0x378; // Transform[]
        public const Int32 LegParts = 0x380; // List<SkinnedMeshRenderer>
        public const Int32 fadeToggles = 0x388; // List<WearableFadeToggle>
        public const Int32 fakeSpineBones = 0x390; // Transform[]
        public const Int32 extraLeanBack = 0x398; // float
        public const Int32 timeInArmsMode = 0x3A0; // float
    }
    public static class ModelState
    {
        public const Int32 waterLevel = 0x10; // float
        public const Int32 lookDir = 0x14; // Vector3
        public const Int32 flags = 0x20; // int
        public const Int32 poseType = 0x24; // int
        public const Int32 inheritedVelocity = 0x28; // Vector3
        public const Int32 ladderType = 0x34; // int
        public const Int32 guidePosition = 0x38; // Vector3
        public const Int32 guideRotation = 0x44; // Vector3
        public const Int32 guidePrefab = 0x50; // uint
        public const Int32 guideValid = 0x54; // bool
        public const Int32 ShouldPool = 0x55; // bool
        public const Int32 _disposed = 0x56; // bool
    }
    public static class Item
    {
        public const Int32 _condition = 0x10; // float
        public const Int32 _maxCondition = 0x14; // float
        public const Int32 info = 0x18; // ItemDefinition
        public const Int32 uid = 0x20; // ItemId
        public const Int32 dirty = 0x28; // bool
        public const Int32 amount = 0x2C; // int
        public const Int32 position = 0x30; // int
        public const Int32 busyTime = 0x34; // float
        public const Int32 removeTime = 0x38; // float
        public const Int32 fuel = 0x3C; // float
        public const Int32 isServer = 0x40; // bool
        public const Int32 instanceData = 0x48; // Item.InstanceData
        public const Int32 skin = 0x50; // ulong
        public const Int32 name = 0x58; // string
        public const Int32 streamerName = 0x60; // string
        public const Int32 text = 0x68; // string
        public const Int32 ammoCount = 0x70; // Nullable<int>
        public const Int32 cookTimeLeft = 0x78; // float
        public const Int32 progressBar = 0x7C; // float
        public const Int32 flags = 0x88; // Item.Flag
        public const Int32 contents = 0x90; // ItemContainer
        public const Int32 parent = 0x98; // ItemContainer
        public const Int32 worldEnt = 0xA0; // EntityRef
        public const Int32 heldEntity = 0xB0; // EntityRef
    }
    public static class Model
    {
        public const Int32 collision = 0x20; // SphereCollider
        public const Int32 rootBone = 0x28; // Transform
        public const Int32 headBone = 0x30; // Transform
        public const Int32 eyeBone = 0x38; // Transform
        public const Int32 animator = 0x40; // Animator
        public const Int32 skeleton = 0x48; // Skeleton
        public const Int32 boneTransforms = 0x50; // Transform[]
        public const Int32 boneNames = 0x58; // string[]
        public const Int32 boneDict = 0x60; // BoneDictionary
        public const Int32 skin = 0x68; // int
        public const Int32 _lodGroup = 0x70; // LODGroup
    }
    public static class RecoilProperties
    {
        public const Int32 recoilYawMin = 0x18; // float
        public const Int32 recoilYawMax = 0x1C; // float
        public const Int32 recoilPitchMin = 0x20; // float
        public const Int32 recoilPitchMax = 0x24; // float
        public const Int32 timeToTakeMin = 0x28; // float
        public const Int32 timeToTakeMax = 0x2C; // float
        public const Int32 ADSScale = 0x30; // float
        public const Int32 movementPenalty = 0x34; // float
        public const Int32 clampPitch = 0x38; // float
        public const Int32 pitchCurve = 0x40; // AnimationCurve
        public const Int32 yawCurve = 0x48; // AnimationCurve
        public const Int32 useCurves = 0x50; // bool
        public const Int32 curvesAsScalar = 0x51; // bool
        public const Int32 shotsUntilMax = 0x54; // int
        public const Int32 maxRecoilRadius = 0x58; // float
        public const Int32 overrideAimconeWithCurve = 0x5C; // bool
        public const Int32 aimconeCurveScale = 0x60; // float
        public const Int32 aimconeCurve = 0x68; // AnimationCurve
        public const Int32 aimconeProbabilityCurve = 0x70; // AnimationCurve
        public const Int32 ammoAimconeScaleMultiProjectile = 0x78; // float
        public const Int32 ammoAimconeScaleSingleProjectile = 0x7C; // float
        public const Int32 newRecoilOverride = 0x80; // RecoilProperties
    }
    public static class BaseFishingRod
    {
        public const Int32 FishingBobberRef = 0x218; // GameObjectRef
        public const Int32 FishCatchDistance = 0x220; // float
        public const Int32 ReelLineRenderer = 0x228; // LineRenderer
        public const Int32 LineRendererWorldStartPos = 0x230; // Transform
        public const Int32 CurrentState = 0x238; // BaseFishingRod.CatchState
        public const Int32 currentFishState = 0x23C; // BaseFishingRod.FishState
        public const Int32 currentBobber = 0x240; // EntityRef<FishingBobber>
        public const Int32 ConditionLossOnSuccess = 0x250; // float
        public const Int32 ConditionLossOnFail = 0x254; // float
        public const Int32 GlobalStrainSpeedMultiplier = 0x258; // float
        public const Int32 MaxCastDistance = 0x25C; // float
        public const Int32 ForceFish = 0x260; // ItemModFishable
        public const Int32 BobberPreview = 0x268; // GameObjectRef
        public const Int32 onLineSoundDef = 0x270; // SoundDefinition
        public const Int32 strainSoundDef = 0x278; // SoundDefinition
        public const Int32 strainGainCurve = 0x280; // AnimationCurve
        public const Int32 tensionBreakSoundDef = 0x288; // SoundDefinition
        public const Int32 lineRendererPositionsArray = 0x290; // Vector3[]
        public const Int32 lineRendererResultArray = 0x298; // Vector3[]
        public const Int32 lineRendererSlack = 0x2A0; // float[]
        public const Int32 clientStrainAmountNormalised = 0x2A8; // float
        public const Int32 canCancel = 0x2AC; // TimeUntil
        public const Int32 rodViewModel = 0x2B0; // FishingRodViewmodel
        public const Int32 spawnedPreview = 0x2B8; // BobberPreview
        public const Int32 aimAnimationReady = 0x2C0; // bool
        public const Int32 onLineSound = 0x2C8; // Sound
        public const Int32 strainSound = 0x2D0; // Sound
        public const Int32 strainGainMod = 0x2D8; // SoundModulation.Modulator
        public const Int32 consumingBackMovement = 0x2E0; // TimeUntil
        public const Int32 reelInAnimTimer = 0x2E4; // TimeSince
    }
    public static class FishingBobber
    {
        public const Int32 centerOfMass = 0x290; // Transform
        public const Int32 myRigidBody = 0x298; // Rigidbody
        public const Int32 lineAttachPoint = 0x2A0; // Transform
        public const Int32 bobberRoot = 0x2A8; // Transform
        public const Int32 HorizontalMoveSpeed = 0x2B0; // float
        public const Int32 PullAwayMoveSpeed = 0x2B4; // float
        public const Int32 SidewaysInputForce = 0x2B8; // float
        public const Int32 ReelInMoveSpeed = 0x2BC; // float
        public const Int32 fishLerp = 0x2C0; // float
        public const Int32 lastPosition = 0x2C4; // Vector3
    }
    public static class OcclusionCulling
    {
        public const Int32 computeShader = 0x20; // ComputeShader
        public const Int32 usePixelShaderFallback = 0x28; // bool
        public const Int32 useAsyncReadAPI = 0x29; // bool
        public const Int32 camera = 0x30; // Camera
        public const Int32 static_staticSet = 0x58; // OcclusionCulling.BufferSet
        public const Int32 static_dynamicSet = 0x60; // OcclusionCulling.BufferSet
        public const Int32 static_gridSet = 0x68; // OcclusionCulling.BufferSet
        public const Int32 frustumPlanes = 0x38; // Vector4[]
        public const Int32 frustumPropNames = 0x40; // string[]
        public const Int32 matrixToFloatTemp = 0x48; // float[]
        public const Int32 fallbackMat = 0x50; // Material
        public const Int32 depthCopyMat = 0x58; // Material
        public const Int32 viewMatrix = 0x60; // Matrix4x4
        public const Int32 projMatrix = 0xA0; // Matrix4x4
        public const Int32 viewProjMatrix = 0xE0; // Matrix4x4
        public const Int32 prevViewProjMatrix = 0x120; // Matrix4x4
        public const Int32 invViewProjMatrix = 0x160; // Matrix4x4
        public const Int32 useNativePath = 0x1A0; // bool
        public const Int32 static_instance = 0x70; // OcclusionCulling
        public const Int32 static_Passthrough = 0x78; // bool
        public const Int32 static__enabled = 0x88; // bool
        public const Int32 static__safeMode = 0x89; // bool
        public const Int32 static__debugShow = 0x8C; // OcclusionCulling.DebugFilter
        public const Int32 debugSettings = 0x1A8; // OcclusionCulling.DebugSettings
        public const Int32 debugMipMat = 0x1B0; // Material
        public const Int32 downscaleMat = 0x1B8; // Material
        public const Int32 blitCopyMat = 0x1C0; // Material
        public const Int32 hiZLevelCount = 0x1C8; // int
        public const Int32 hiZWidth = 0x1CC; // int
        public const Int32 hiZHeight = 0x1D0; // int
        public const Int32 depthTexture = 0x1D8; // RenderTexture
        public const Int32 hiZTexture = 0x1E0; // RenderTexture
        public const Int32 hiZLevels = 0x1E8; // RenderTexture[]
    }
    public static class OcclusionCulling_DebugSettings
    {
        public const Int32 log = 0x10; // bool
        public const Int32 showAllVisible = 0x11; // bool
        public const Int32 showMipChain = 0x12; // bool
        public const Int32 showMain = 0x13; // bool
        public const Int32 showMainLod = 0x14; // int
        public const Int32 showFallback = 0x18; // bool
        public const Int32 showStats = 0x19; // bool
        public const Int32 showScreenBounds = 0x1A; // bool
        public const Int32 showMask = 0x1C; // OcclusionCulling.DebugMask
        public const Int32 layerFilter = 0x20; // LayerMask
    }
} // namespace blazedumper
