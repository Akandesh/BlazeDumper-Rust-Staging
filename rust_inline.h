#pragma once
#include <cstdint>

namespace blazedumper {
    inline constexpr ::std::ptrdiff_t BaseEntity_TypeInfo = 0x36504C0;
    inline constexpr ::std::ptrdiff_t Facepunch_Input_TypeInfo = 0x366B668;
    inline constexpr ::std::ptrdiff_t MainCamera_TypeInfo = 0x3652690;
    inline constexpr ::std::ptrdiff_t System_Collections_Generic_List_BaseGameMode_TypeInfo = 0x364F880;
    inline constexpr ::std::ptrdiff_t BaseGameMode_TypeInfo = 0x364F918;
    namespace BasePlayer {
        inline constexpr ::std::ptrdiff_t __menuOption_Climb = 0x240; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Drink = 0x298; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_InviteToTeam = 0x2F0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_AssistPlayer = 0x348; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_LootPlayer = 0x3A0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Promote = 0x3F8; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_SaltWater = 0x450; // Option
        inline constexpr ::std::ptrdiff_t lastOpenSoundPlay = 0x4A8; // TimeSince
        inline constexpr ::std::ptrdiff_t currentViewMode = 0x4AC; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t selectedViewMode = 0x4B0; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t lastRevivePoint = 0x4B4; // Vector3
        inline constexpr ::std::ptrdiff_t lastReviveDirection = 0x4C0; // Vector3
        inline constexpr ::std::ptrdiff_t playerModel = 0x4D0; // PlayerModel
        inline constexpr ::std::ptrdiff_t Frozen = 0x4D8; // bool
        inline constexpr ::std::ptrdiff_t voiceRecorder = 0x4E0; // PlayerVoiceRecorder
        inline constexpr ::std::ptrdiff_t voiceSpeaker = 0x4E8; // PlayerVoiceSpeaker
        inline constexpr ::std::ptrdiff_t input = 0x4F0; // PlayerInput
        inline constexpr ::std::ptrdiff_t movement = 0x4F8; // BaseMovement
        inline constexpr ::std::ptrdiff_t collision = 0x500; // BaseCollision
        inline constexpr ::std::ptrdiff_t _lookingAt = 0x508; // GameObject
        inline constexpr ::std::ptrdiff_t _lookingAtEntity = 0x510; // BaseEntity
        inline constexpr ::std::ptrdiff_t _lookingAtCollider = 0x518; // Collider
        inline constexpr ::std::ptrdiff_t lookingAtPoint = 0x520; // Vector3
        inline constexpr ::std::ptrdiff_t wakeTime = 0x52C; // float
        inline constexpr ::std::ptrdiff_t needsClothesRebuild = 0x530; // bool
        inline constexpr ::std::ptrdiff_t wasSleeping = 0x531; // bool
        inline constexpr ::std::ptrdiff_t wokeUpBefore = 0x532; // bool
        inline constexpr ::std::ptrdiff_t wasDead = 0x533; // bool
        inline constexpr ::std::ptrdiff_t lastClothesHash = 0x534; // uint
        inline constexpr ::std::ptrdiff_t IsWearingDiveGoggles = 0x538; // bool
        inline constexpr ::std::ptrdiff_t GestureViewModel = 0x540; // ViewModel
        inline constexpr ::std::ptrdiff_t timeSinceUpdatedLookingAt = 0x548; // RealTimeSince
        inline constexpr ::std::ptrdiff_t nextTopologyTestTime = 0x54C; // float
        inline constexpr ::std::ptrdiff_t usePressTime = 0x550; // float
        inline constexpr ::std::ptrdiff_t useHeldTime = 0x554; // float
        inline constexpr ::std::ptrdiff_t lookingAtTest = 0x558; // HitTest
        inline constexpr ::std::ptrdiff_t cachedWaterDrinkingPoint = 0x560; // Vector3
        inline constexpr ::std::ptrdiff_t gestureList = 0x570; // GestureCollection
        inline constexpr ::std::ptrdiff_t gestureFinishedTime = 0x578; // TimeUntil
        inline constexpr ::std::ptrdiff_t blockHeldInputTimer = 0x57C; // TimeSince
        inline constexpr ::std::ptrdiff_t currentGesture = 0x580; // GestureConfig
        inline constexpr ::std::ptrdiff_t disabledHeldEntity = 0x588; // HeldEntity
        inline constexpr ::std::ptrdiff_t nextGestureMenuOpenTime = 0x590; // float
        inline constexpr ::std::ptrdiff_t lastGestureCancel = 0x594; // TimeSince
        inline constexpr ::std::ptrdiff_t client_lastHelloTime = 0x598; // float
        inline constexpr ::std::ptrdiff_t currentTeam = 0x5A0; // ulong
        inline constexpr ::std::ptrdiff_t clientTeam = 0x5A8; // PlayerTeam
        inline constexpr ::std::ptrdiff_t lastReceivedTeamTime = 0x5B0; // float
        inline constexpr ::std::ptrdiff_t lastPresenceTeamId = 0x5B8; // ulong
        inline constexpr ::std::ptrdiff_t lastPresenceTeamSize = 0x5C0; // int
        inline constexpr ::std::ptrdiff_t playerGroupKey = 0x5C8; // string
        inline constexpr ::std::ptrdiff_t playerGroupSizeKey = 0x5D0; // string
        inline constexpr ::std::ptrdiff_t clActiveItem = 0x5D8; // uint
        inline constexpr ::std::ptrdiff_t ClientCurrentMapNote = 0x5E0; // MapNote
        inline constexpr ::std::ptrdiff_t ClientCurrentDeathNote = 0x5E8; // MapNote
        inline constexpr ::std::ptrdiff_t missions = 0x5F0; // List<BaseMission.MissionInstance>
        inline constexpr ::std::ptrdiff_t _activeMission = 0x5F8; // int
        inline constexpr ::std::ptrdiff_t modelState = 0x600; // ModelState
        inline constexpr ::std::ptrdiff_t mounted = 0x608; // EntityRef
        inline constexpr ::std::ptrdiff_t nextSeatSwapTime = 0x618; // float
        inline constexpr ::std::ptrdiff_t PetEntity = 0x620; // BaseEntity
        inline constexpr ::std::ptrdiff_t lastPetCommandIssuedTime = 0x628; // float
        inline constexpr ::std::ptrdiff_t PetPrefabID = 0x62C; // uint
        inline constexpr ::std::ptrdiff_t PetID = 0x630; // uint
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilegeTime = 0x634; // float
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilege = 0x638; // BuildingPrivlidge
        inline constexpr ::std::ptrdiff_t maxProjectileID = 0x640; // int
        inline constexpr ::std::ptrdiff_t lastUpdateTime = 0x644; // float
        inline constexpr ::std::ptrdiff_t cachedThreatLevel = 0x648; // float
        inline constexpr ::std::ptrdiff_t serverTickRate = 0x64C; // int
        inline constexpr ::std::ptrdiff_t clientTickRate = 0x650; // int
        inline constexpr ::std::ptrdiff_t serverTickInterval = 0x654; // float
        inline constexpr ::std::ptrdiff_t clientTickInterval = 0x658; // float
        inline constexpr ::std::ptrdiff_t lastSentTickTime = 0x65C; // float
        inline constexpr ::std::ptrdiff_t lastTickStopwatch = 0x660; // Stopwatch
        inline constexpr ::std::ptrdiff_t lastSentTick = 0x668; // PlayerTick
        inline constexpr ::std::ptrdiff_t nextVisThink = 0x670; // float
        inline constexpr ::std::ptrdiff_t lastTimeSeen = 0x674; // float
        inline constexpr ::std::ptrdiff_t debugPrevVisible = 0x678; // bool
        inline constexpr ::std::ptrdiff_t fallDamageEffect = 0x680; // GameObjectRef
        inline constexpr ::std::ptrdiff_t drownEffect = 0x688; // GameObjectRef
        inline constexpr ::std::ptrdiff_t playerFlags = 0x690; // BasePlayer.PlayerFlags
        inline constexpr ::std::ptrdiff_t eyes = 0x698; // PlayerEyes
        inline constexpr ::std::ptrdiff_t inventory = 0x6A0; // PlayerInventory
        inline constexpr ::std::ptrdiff_t blueprints = 0x6A8; // PlayerBlueprints
        inline constexpr ::std::ptrdiff_t metabolism = 0x6B0; // PlayerMetabolism
        inline constexpr ::std::ptrdiff_t modifiers = 0x6B8; // PlayerModifiers
        inline constexpr ::std::ptrdiff_t playerCollider = 0x6C0; // CapsuleCollider
        inline constexpr ::std::ptrdiff_t Belt = 0x6C8; // PlayerBelt
        inline constexpr ::std::ptrdiff_t playerRigidbody = 0x6D0; // Rigidbody
        inline constexpr ::std::ptrdiff_t userID = 0x6D8; // ulong
        inline constexpr ::std::ptrdiff_t UserIDString = 0x6E0; // string
        inline constexpr ::std::ptrdiff_t gamemodeteam = 0x6E8; // int
        inline constexpr ::std::ptrdiff_t reputation = 0x6EC; // int
        inline constexpr ::std::ptrdiff_t _displayName = 0x6F0; // string
        inline constexpr ::std::ptrdiff_t _lastSetName = 0x6F8; // string
        inline constexpr ::std::ptrdiff_t playerColliderStanding = 0x700; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderDucked = 0x714; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderCrawling = 0x728; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderLyingDown = 0x73C; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t cachedProtection = 0x750; // ProtectionProperties
        inline constexpr ::std::ptrdiff_t lastHeadshotSoundTime = 0x758; // float
        inline constexpr ::std::ptrdiff_t nextColliderRefreshTime = 0x75C; // float
        inline constexpr ::std::ptrdiff_t clothingBlocksAiming = 0x760; // bool
        inline constexpr ::std::ptrdiff_t clothingMoveSpeedReduction = 0x764; // float
        inline constexpr ::std::ptrdiff_t clothingWaterSpeedBonus = 0x768; // float
        inline constexpr ::std::ptrdiff_t clothingAccuracyBonus = 0x76C; // float
        inline constexpr ::std::ptrdiff_t equippingBlocked = 0x770; // bool
        inline constexpr ::std::ptrdiff_t eggVision = 0x774; // float
        inline constexpr ::std::ptrdiff_t activeTelephone = 0x778; // PhoneController
        inline constexpr ::std::ptrdiff_t designingAIEntity = 0x780; // BaseEntity
    } // namespace BasePlayer
    namespace BaseEntity {
        inline constexpr ::std::ptrdiff_t ragdoll = 0x78; // Ragdoll
        inline constexpr ::std::ptrdiff_t positionLerp = 0x80; // PositionLerp
        inline constexpr ::std::ptrdiff_t menuOptions = 0x88; // List<Option>
        inline constexpr ::std::ptrdiff_t broadcastProtocol = 0x90; // uint
        inline constexpr ::std::ptrdiff_t links = 0x98; // List<EntityLink>
        inline constexpr ::std::ptrdiff_t linkedToNeighbours = 0xA0; // bool
        inline constexpr ::std::ptrdiff_t _pendingFileRequests = 0xA8; // List<BaseEntity.PendingFileRequest>
        inline constexpr ::std::ptrdiff_t updateParentingAction = 0xB0; // Action
        inline constexpr ::std::ptrdiff_t addedToParentEntity = 0xB8; // BaseEntity
        inline constexpr ::std::ptrdiff_t itemSkin = 0xC0; // ItemSkin
        inline constexpr ::std::ptrdiff_t entitySlots = 0xC8; // EntityRef[]
        inline constexpr ::std::ptrdiff_t triggers = 0xD0; // List<TriggerBase>
        inline constexpr ::std::ptrdiff_t isVisible = 0xD8; // bool
        inline constexpr ::std::ptrdiff_t isAnimatorVisible = 0xD9; // bool
        inline constexpr ::std::ptrdiff_t isShadowVisible = 0xDA; // bool
        inline constexpr ::std::ptrdiff_t localOccludee = 0xE0; // OccludeeSphere
        inline constexpr ::std::ptrdiff_t Weight = 0x100; // float
        inline constexpr ::std::ptrdiff_t bounds = 0x104; // Bounds
        inline constexpr ::std::ptrdiff_t impactEffect = 0x120; // GameObjectRef
        inline constexpr ::std::ptrdiff_t enableSaving = 0x128; // bool
        inline constexpr ::std::ptrdiff_t syncPosition = 0x129; // bool
        inline constexpr ::std::ptrdiff_t model = 0x130; // Model
        inline constexpr ::std::ptrdiff_t flags = 0x138; // BaseEntity.Flags
        inline constexpr ::std::ptrdiff_t parentBone = 0x13C; // uint
        inline constexpr ::std::ptrdiff_t skinID = 0x140; // ulong
        inline constexpr ::std::ptrdiff_t _components = 0x148; // EntityComponentBase[]
        inline constexpr ::std::ptrdiff_t HasBrain = 0x150; // bool
        inline constexpr ::std::ptrdiff_t _name = 0x158; // string
        inline constexpr ::std::ptrdiff_t OwnerID = 0x160; // ulong
    } // namespace BaseEntity
    namespace BaseCombatEntity {
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_Pickup = 0x168; // Option
        inline constexpr ::std::ptrdiff_t skeletonProperties = 0x1C0; // SkeletonProperties
        inline constexpr ::std::ptrdiff_t baseProtection = 0x1C8; // ProtectionProperties
        inline constexpr ::std::ptrdiff_t startHealth = 0x1D0; // float
        inline constexpr ::std::ptrdiff_t pickup = 0x1D8; // BaseCombatEntity.Pickup
        inline constexpr ::std::ptrdiff_t repair = 0x1F8; // BaseCombatEntity.Repair
        inline constexpr ::std::ptrdiff_t ShowHealthInfo = 0x220; // bool
        inline constexpr ::std::ptrdiff_t lifestate = 0x224; // BaseCombatEntity.LifeState
        inline constexpr ::std::ptrdiff_t sendsHitNotification = 0x228; // bool
        inline constexpr ::std::ptrdiff_t sendsMeleeHitNotification = 0x229; // bool
        inline constexpr ::std::ptrdiff_t markAttackerHostile = 0x22A; // bool
        inline constexpr ::std::ptrdiff_t _health = 0x22C; // float
        inline constexpr ::std::ptrdiff_t _maxHealth = 0x230; // float
        inline constexpr ::std::ptrdiff_t faction = 0x234; // BaseCombatEntity.Faction
        inline constexpr ::std::ptrdiff_t deathTime = 0x238; // float
        inline constexpr ::std::ptrdiff_t lastNotifyFrame = 0x23C; // int
    } // namespace BaseCombatEntity
    namespace BuildingPrivlidge {
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_MaxAuth = 0x3D0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_RotateVM = 0x428; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuAuthorize = 0x480; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuClearList = 0x4D8; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_MenuDeauthorize = 0x530; // Option
        inline constexpr ::std::ptrdiff_t cachedProtectedMinutes = 0x588; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepPeriodMinutes = 0x58C; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepCostFraction = 0x590; // float
        inline constexpr ::std::ptrdiff_t authorizedPlayers = 0x598; // List<PlayerNameID>
        inline constexpr ::std::ptrdiff_t allowedConstructionItems = 0x5A0; // List<ItemDefinition>
    } // namespace BuildingPrivlidge
    namespace BaseProjectile {
        inline constexpr ::std::ptrdiff_t NoiseRadius = 0x280; // float
        inline constexpr ::std::ptrdiff_t damageScale = 0x284; // float
        inline constexpr ::std::ptrdiff_t distanceScale = 0x288; // float
        inline constexpr ::std::ptrdiff_t projectileVelocityScale = 0x28C; // float
        inline constexpr ::std::ptrdiff_t automatic = 0x290; // bool
        inline constexpr ::std::ptrdiff_t usableByTurret = 0x291; // bool
        inline constexpr ::std::ptrdiff_t turretDamageScale = 0x294; // float
        inline constexpr ::std::ptrdiff_t attackFX = 0x298; // GameObjectRef
        inline constexpr ::std::ptrdiff_t silencedAttack = 0x2A0; // GameObjectRef
        inline constexpr ::std::ptrdiff_t muzzleBrakeAttack = 0x2A8; // GameObjectRef
        inline constexpr ::std::ptrdiff_t MuzzlePoint = 0x2B0; // Transform
        inline constexpr ::std::ptrdiff_t reloadTime = 0x2B8; // float
        inline constexpr ::std::ptrdiff_t canUnloadAmmo = 0x2BC; // bool
        inline constexpr ::std::ptrdiff_t primaryMagazine = 0x2C0; // BaseProjectile.Magazine
        inline constexpr ::std::ptrdiff_t fractionalReload = 0x2C8; // bool
        inline constexpr ::std::ptrdiff_t reloadStartDuration = 0x2CC; // float
        inline constexpr ::std::ptrdiff_t reloadFractionDuration = 0x2D0; // float
        inline constexpr ::std::ptrdiff_t reloadEndDuration = 0x2D4; // float
        inline constexpr ::std::ptrdiff_t aimSway = 0x2D8; // float
        inline constexpr ::std::ptrdiff_t aimSwaySpeed = 0x2DC; // float
        inline constexpr ::std::ptrdiff_t recoil = 0x2E0; // RecoilProperties
        inline constexpr ::std::ptrdiff_t aimconeCurve = 0x2E8; // AnimationCurve
        inline constexpr ::std::ptrdiff_t aimCone = 0x2F0; // float
        inline constexpr ::std::ptrdiff_t hipAimCone = 0x2F4; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyPerShot = 0x2F8; // float
        inline constexpr ::std::ptrdiff_t aimConePenaltyMax = 0x2FC; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyRecoverTime = 0x300; // float
        inline constexpr ::std::ptrdiff_t aimconePenaltyRecoverDelay = 0x304; // float
        inline constexpr ::std::ptrdiff_t stancePenaltyScale = 0x308; // float
        inline constexpr ::std::ptrdiff_t hasADS = 0x30C; // bool
        inline constexpr ::std::ptrdiff_t noAimingWhileCycling = 0x30D; // bool
        inline constexpr ::std::ptrdiff_t manualCycle = 0x30E; // bool
        inline constexpr ::std::ptrdiff_t needsCycle = 0x30F; // bool
        inline constexpr ::std::ptrdiff_t isCycling = 0x310; // bool
        inline constexpr ::std::ptrdiff_t aiming = 0x311; // bool
        inline constexpr ::std::ptrdiff_t isBurstWeapon = 0x312; // bool
        inline constexpr ::std::ptrdiff_t canChangeFireModes = 0x313; // bool
        inline constexpr ::std::ptrdiff_t defaultOn = 0x314; // bool
        inline constexpr ::std::ptrdiff_t internalBurstRecoilScale = 0x318; // float
        inline constexpr ::std::ptrdiff_t internalBurstFireRateScale = 0x31C; // float
        inline constexpr ::std::ptrdiff_t internalBurstAimConeScale = 0x320; // float
        inline constexpr ::std::ptrdiff_t Toast_BurstDisabled = 0x328; // Translate.Phrase
        inline constexpr ::std::ptrdiff_t Toast_BurstEnabled = 0x330; // Translate.Phrase
        inline constexpr ::std::ptrdiff_t resetDuration = 0x338; // float
        inline constexpr ::std::ptrdiff_t numShotsFired = 0x33C; // int
        inline constexpr ::std::ptrdiff_t nextReloadTime = 0x340; // float
        inline constexpr ::std::ptrdiff_t startReloadTime = 0x344; // float
        inline constexpr ::std::ptrdiff_t stancePenalty = 0x348; // float
        inline constexpr ::std::ptrdiff_t aimconePenalty = 0x34C; // float
        inline constexpr ::std::ptrdiff_t cachedModHash = 0x350; // uint
        inline constexpr ::std::ptrdiff_t sightAimConeScale = 0x354; // float
        inline constexpr ::std::ptrdiff_t sightAimConeOffset = 0x358; // float
        inline constexpr ::std::ptrdiff_t hipAimConeScale = 0x35C; // float
        inline constexpr ::std::ptrdiff_t hipAimConeOffset = 0x360; // float
        inline constexpr ::std::ptrdiff_t isReloading = 0x364; // bool
        inline constexpr ::std::ptrdiff_t swaySampleTime = 0x368; // float
        inline constexpr ::std::ptrdiff_t lastShotTime = 0x36C; // float
        inline constexpr ::std::ptrdiff_t reloadPressTime = 0x370; // float
        inline constexpr ::std::ptrdiff_t ammoTypePreReload = 0x378; // ItemDefinition
        inline constexpr ::std::ptrdiff_t fractionalReloadDesiredCount = 0x380; // int
        inline constexpr ::std::ptrdiff_t fractionalReloadNumAdded = 0x384; // int
        inline constexpr ::std::ptrdiff_t currentBurst = 0x388; // int
        inline constexpr ::std::ptrdiff_t triggerReady = 0x38C; // bool
        inline constexpr ::std::ptrdiff_t nextHeightCheckTime = 0x390; // float
        inline constexpr ::std::ptrdiff_t cachedUnderground = 0x394; // bool
        inline constexpr ::std::ptrdiff_t createdProjectiles = 0x398; // List<Projectile>
    } // namespace BaseProjectile
    namespace Magazine {
        inline constexpr ::std::ptrdiff_t definition = 0x10; // BaseProjectile.Magazine.Definition
        inline constexpr ::std::ptrdiff_t capacity = 0x18; // int
        inline constexpr ::std::ptrdiff_t contents = 0x1C; // int
        inline constexpr ::std::ptrdiff_t ammoType = 0x20; // ItemDefinition
    } // namespace Magazine
    namespace PlayerInventory {
        inline constexpr ::std::ptrdiff_t containerMain = 0x20; // ItemContainer
        inline constexpr ::std::ptrdiff_t containerBelt = 0x28; // ItemContainer
        inline constexpr ::std::ptrdiff_t containerWear = 0x30; // ItemContainer
        inline constexpr ::std::ptrdiff_t crafting = 0x38; // ItemCrafter
        inline constexpr ::std::ptrdiff_t loot = 0x40; // PlayerLoot
    } // namespace PlayerInventory
    namespace ItemContainer {
        inline constexpr ::std::ptrdiff_t flags = 0x10; // ItemContainer.Flag
        inline constexpr ::std::ptrdiff_t allowedContents = 0x14; // ItemContainer.ContentsType
        inline constexpr ::std::ptrdiff_t onlyAllowedItems = 0x18; // ItemDefinition[]
        inline constexpr ::std::ptrdiff_t availableSlots = 0x20; // List<ItemSlot>
        inline constexpr ::std::ptrdiff_t capacity = 0x28; // int
        inline constexpr ::std::ptrdiff_t uid = 0x2C; // uint
        inline constexpr ::std::ptrdiff_t dirty = 0x30; // bool
        inline constexpr ::std::ptrdiff_t itemList = 0x38; // List<Item>
        inline constexpr ::std::ptrdiff_t temperature = 0x40; // float
        inline constexpr ::std::ptrdiff_t parent = 0x48; // Item
        inline constexpr ::std::ptrdiff_t playerOwner = 0x50; // BasePlayer
        inline constexpr ::std::ptrdiff_t entityOwner = 0x58; // BaseEntity
        inline constexpr ::std::ptrdiff_t isServer = 0x60; // bool
        inline constexpr ::std::ptrdiff_t maxStackSize = 0x64; // int
    } // namespace ItemContainer
    namespace PlayerModel {
        inline constexpr ::std::ptrdiff_t _smoothAimWeight = 0x18; // float
        inline constexpr ::std::ptrdiff_t _smoothVelocity = 0x1C; // float
        inline constexpr ::std::ptrdiff_t _smoothlookAngle = 0x20; // Vector3
        inline constexpr ::std::ptrdiff_t allowMountedHeadLook = 0x2C; // bool
        inline constexpr ::std::ptrdiff_t smoothLookDir = 0x30; // Vector3
        inline constexpr ::std::ptrdiff_t lastSafeLookDir = 0x3C; // Vector3
        inline constexpr ::std::ptrdiff_t Shoulders = 0x48; // Transform[]
        inline constexpr ::std::ptrdiff_t AdditionalSpineBones = 0x50; // Transform[]
        inline constexpr ::std::ptrdiff_t LegParts = 0x58; // List<SkinnedMeshRenderer>
        inline constexpr ::std::ptrdiff_t fakeSpineBones = 0x60; // Transform[]
        inline constexpr ::std::ptrdiff_t extraLeanBack = 0x68; // float
        inline constexpr ::std::ptrdiff_t timeInArmsMode = 0x70; // float
        inline constexpr ::std::ptrdiff_t collision = 0x78; // BoxCollider
        inline constexpr ::std::ptrdiff_t censorshipCube = 0x80; // GameObject
        inline constexpr ::std::ptrdiff_t censorshipCubeBreasts = 0x88; // GameObject
        inline constexpr ::std::ptrdiff_t jawBone = 0x90; // GameObject
        inline constexpr ::std::ptrdiff_t neckBone = 0x98; // GameObject
        inline constexpr ::std::ptrdiff_t headBone = 0xA0; // GameObject
        inline constexpr ::std::ptrdiff_t eyeController = 0xA8; // EyeController
        inline constexpr ::std::ptrdiff_t blinkController = 0xB0; // EyeBlink
        inline constexpr ::std::ptrdiff_t SpineBones = 0xB8; // Transform[]
        inline constexpr ::std::ptrdiff_t leftFootBone = 0xC0; // Transform
        inline constexpr ::std::ptrdiff_t rightFootBone = 0xC8; // Transform
        inline constexpr ::std::ptrdiff_t leftHandPropBone = 0xD0; // Transform
        inline constexpr ::std::ptrdiff_t rightHandPropBone = 0xD8; // Transform
        inline constexpr ::std::ptrdiff_t rightHandTarget = 0xE0; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetPosition = 0xEC; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetRotation = 0xF8; // Quaternion
        inline constexpr ::std::ptrdiff_t rightHandTargetPosition = 0x108; // Vector3
        inline constexpr ::std::ptrdiff_t rightHandTargetRotation = 0x114; // Quaternion
        inline constexpr ::std::ptrdiff_t steeringTargetDegrees = 0x124; // float
        inline constexpr ::std::ptrdiff_t rightFootTargetPosition = 0x128; // Vector3
        inline constexpr ::std::ptrdiff_t rightFootTargetRotation = 0x134; // Quaternion
        inline constexpr ::std::ptrdiff_t leftFootTargetPosition = 0x144; // Vector3
        inline constexpr ::std::ptrdiff_t leftFootTargetRotation = 0x150; // Quaternion
        inline constexpr ::std::ptrdiff_t CinematicAnimationController = 0x160; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t DefaultAvatar = 0x168; // Avatar
        inline constexpr ::std::ptrdiff_t CinematicAvatar = 0x170; // Avatar
        inline constexpr ::std::ptrdiff_t DefaultHoldType = 0x178; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t SleepGesture = 0x180; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CrawlToIncapacitatedGesture = 0x188; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t StandToIncapacitatedGesture = 0x190; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CurrentGesture = 0x198; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t MaleSkin = 0x1A0; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t FemaleSkin = 0x1A8; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t subsurfaceProfile = 0x1B0; // SubsurfaceProfile
        inline constexpr ::std::ptrdiff_t voiceVolume = 0x1B8; // float
        inline constexpr ::std::ptrdiff_t skinColor = 0x1BC; // float
        inline constexpr ::std::ptrdiff_t skinNumber = 0x1C0; // float
        inline constexpr ::std::ptrdiff_t meshNumber = 0x1C4; // float
        inline constexpr ::std::ptrdiff_t hairNumber = 0x1C8; // float
        inline constexpr ::std::ptrdiff_t skinType = 0x1CC; // int
        inline constexpr ::std::ptrdiff_t movementSounds = 0x1D0; // MovementSounds
        inline constexpr ::std::ptrdiff_t showSash = 0x1D8; // bool
        inline constexpr ::std::ptrdiff_t tempPoseType = 0x1DC; // int
        inline constexpr ::std::ptrdiff_t underwearSkin = 0x1E0; // uint
        inline constexpr ::std::ptrdiff_t overrideSkinSeed = 0x1E8; // ulong
        inline constexpr ::std::ptrdiff_t AimAngles = 0x1F0; // Quaternion
        inline constexpr ::std::ptrdiff_t LookAngles = 0x200; // Quaternion
        inline constexpr ::std::ptrdiff_t modelState = 0x210; // ModelState
        inline constexpr ::std::ptrdiff_t position = 0x218; // Vector3
        inline constexpr ::std::ptrdiff_t velocity = 0x224; // Vector3
        inline constexpr ::std::ptrdiff_t speedOverride = 0x230; // Vector3
        inline constexpr ::std::ptrdiff_t newVelocity = 0x23C; // Vector3
        inline constexpr ::std::ptrdiff_t rotation = 0x248; // Quaternion
        inline constexpr ::std::ptrdiff_t mountedRotation = 0x258; // Quaternion
        inline constexpr ::std::ptrdiff_t smoothLeftFootIK = 0x268; // Vector3
        inline constexpr ::std::ptrdiff_t smoothRightFootIK = 0x274; // Vector3
        inline constexpr ::std::ptrdiff_t drawShadowOnly = 0x280; // bool
        inline constexpr ::std::ptrdiff_t isIncapacitated = 0x281; // bool
        inline constexpr ::std::ptrdiff_t flinchLocation = 0x284; // uint
        inline constexpr ::std::ptrdiff_t visible = 0x288; // bool
        inline constexpr ::std::ptrdiff_t nameTag = 0x290; // PlayerNameTag
        inline constexpr ::std::ptrdiff_t animatorNeedsWarmup = 0x298; // bool
        inline constexpr ::std::ptrdiff_t isLocalPlayer = 0x299; // bool
        inline constexpr ::std::ptrdiff_t aimSoundDef = 0x2A0; // SoundDefinition
        inline constexpr ::std::ptrdiff_t aimEndSoundDef = 0x2A8; // SoundDefinition
        inline constexpr ::std::ptrdiff_t InGesture = 0x2B0; // bool
        inline constexpr ::std::ptrdiff_t CurrentGestureConfig = 0x2B8; // GestureConfig
        inline constexpr ::std::ptrdiff_t InCinematic = 0x2C0; // bool
        inline constexpr ::std::ptrdiff_t defaultAnimatorController = 0x2C8; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t _multiMesh = 0x2D0; // SkinnedMultiMesh
        inline constexpr ::std::ptrdiff_t _animator = 0x2D8; // Animator
        inline constexpr ::std::ptrdiff_t _lodGroup = 0x2E0; // LODGroup
        inline constexpr ::std::ptrdiff_t _currentGesture = 0x2E8; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t holdTypeLock = 0x2F0; // float
        inline constexpr ::std::ptrdiff_t hasHeldEntity = 0x2F4; // bool
        inline constexpr ::std::ptrdiff_t wasMountedRightAim = 0x2F5; // bool
        inline constexpr ::std::ptrdiff_t cachedMask = 0x2F8; // int
        inline constexpr ::std::ptrdiff_t cachedConstructionMask = 0x2FC; // int
        inline constexpr ::std::ptrdiff_t WorkshopHeldEntity = 0x300; // HeldEntity
        inline constexpr ::std::ptrdiff_t wasCrawling = 0x308; // bool
        inline constexpr ::std::ptrdiff_t mountedSpineLookWeight = 0x30C; // float
        inline constexpr ::std::ptrdiff_t mountedAnimSpeed = 0x310; // float
        inline constexpr ::std::ptrdiff_t preserveBones = 0x314; // bool
        inline constexpr ::std::ptrdiff_t blendShapeControllers = 0x320; // List<BlendShapeController>
        inline constexpr ::std::ptrdiff_t IsNpc = 0x328; // bool
        inline constexpr ::std::ptrdiff_t timeSinceReactionStart = 0x32C; // TimeSince
        inline constexpr ::std::ptrdiff_t timeSinceLeftFootTest = 0x330; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedLeftFootPos = 0x334; // Vector3
        inline constexpr ::std::ptrdiff_t cachedLeftFootNormal = 0x340; // Vector3
        inline constexpr ::std::ptrdiff_t timeSinceRightFootTest = 0x34C; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedRightFootPos = 0x350; // Vector3
        inline constexpr ::std::ptrdiff_t cachedRightFootNormal = 0x35C; // Vector3
    } // namespace PlayerModel
    namespace ModelState {
        inline constexpr ::std::ptrdiff_t ShouldPool = 0x10; // bool
        inline constexpr ::std::ptrdiff_t _disposed = 0x11; // bool
        inline constexpr ::std::ptrdiff_t waterLevel = 0x14; // float
        inline constexpr ::std::ptrdiff_t lookDir = 0x18; // Vector3
        inline constexpr ::std::ptrdiff_t flags = 0x24; // int
        inline constexpr ::std::ptrdiff_t poseType = 0x28; // int
        inline constexpr ::std::ptrdiff_t inheritedVelocity = 0x2C; // Vector3
    } // namespace ModelState
    namespace Item {
        inline constexpr ::std::ptrdiff_t _condition = 0x18; // float
        inline constexpr ::std::ptrdiff_t _maxCondition = 0x1C; // float
        inline constexpr ::std::ptrdiff_t info = 0x20; // ItemDefinition
        inline constexpr ::std::ptrdiff_t uid = 0x28; // uint
        inline constexpr ::std::ptrdiff_t dirty = 0x2C; // bool
        inline constexpr ::std::ptrdiff_t amount = 0x30; // int
        inline constexpr ::std::ptrdiff_t position = 0x34; // int
        inline constexpr ::std::ptrdiff_t busyTime = 0x38; // float
        inline constexpr ::std::ptrdiff_t removeTime = 0x3C; // float
        inline constexpr ::std::ptrdiff_t fuel = 0x40; // float
        inline constexpr ::std::ptrdiff_t isServer = 0x44; // bool
        inline constexpr ::std::ptrdiff_t instanceData = 0x48; // Item.InstanceData
        inline constexpr ::std::ptrdiff_t skin = 0x50; // ulong
        inline constexpr ::std::ptrdiff_t name = 0x58; // string
        inline constexpr ::std::ptrdiff_t text = 0x60; // string
        inline constexpr ::std::ptrdiff_t cookTimeLeft = 0x68; // float
        inline constexpr ::std::ptrdiff_t progressBar = 0x6C; // float
        inline constexpr ::std::ptrdiff_t flags = 0x78; // Item.Flag
        inline constexpr ::std::ptrdiff_t contents = 0x80; // ItemContainer
        inline constexpr ::std::ptrdiff_t parent = 0x88; // ItemContainer
        inline constexpr ::std::ptrdiff_t worldEnt = 0x90; // EntityRef
        inline constexpr ::std::ptrdiff_t heldEntity = 0xA0; // EntityRef
    } // namespace Item
    namespace Model {
        inline constexpr ::std::ptrdiff_t collision = 0x18; // SphereCollider
        inline constexpr ::std::ptrdiff_t rootBone = 0x20; // Transform
        inline constexpr ::std::ptrdiff_t headBone = 0x28; // Transform
        inline constexpr ::std::ptrdiff_t eyeBone = 0x30; // Transform
        inline constexpr ::std::ptrdiff_t animator = 0x38; // Animator
        inline constexpr ::std::ptrdiff_t skeleton = 0x40; // Skeleton
        inline constexpr ::std::ptrdiff_t boneTransforms = 0x48; // Transform[]
        inline constexpr ::std::ptrdiff_t boneNames = 0x50; // string[]
        inline constexpr ::std::ptrdiff_t boneDict = 0x58; // BoneDictionary
        inline constexpr ::std::ptrdiff_t skin = 0x60; // int
        inline constexpr ::std::ptrdiff_t _lodGroup = 0x68; // LODGroup
    } // namespace Model
    namespace RecoilProperties {
        inline constexpr ::std::ptrdiff_t recoilYawMin = 0x18; // float
        inline constexpr ::std::ptrdiff_t recoilYawMax = 0x1C; // float
        inline constexpr ::std::ptrdiff_t recoilPitchMin = 0x20; // float
        inline constexpr ::std::ptrdiff_t recoilPitchMax = 0x24; // float
        inline constexpr ::std::ptrdiff_t timeToTakeMin = 0x28; // float
        inline constexpr ::std::ptrdiff_t timeToTakeMax = 0x2C; // float
        inline constexpr ::std::ptrdiff_t ADSScale = 0x30; // float
        inline constexpr ::std::ptrdiff_t movementPenalty = 0x34; // float
        inline constexpr ::std::ptrdiff_t clampPitch = 0x38; // float
        inline constexpr ::std::ptrdiff_t pitchCurve = 0x40; // AnimationCurve
        inline constexpr ::std::ptrdiff_t yawCurve = 0x48; // AnimationCurve
        inline constexpr ::std::ptrdiff_t useCurves = 0x50; // bool
        inline constexpr ::std::ptrdiff_t curvesAsScalar = 0x51; // bool
        inline constexpr ::std::ptrdiff_t shotsUntilMax = 0x54; // int
        inline constexpr ::std::ptrdiff_t maxRecoilRadius = 0x58; // float
        inline constexpr ::std::ptrdiff_t overrideAimconeWithCurve = 0x5C; // bool
        inline constexpr ::std::ptrdiff_t aimconeCurveScale = 0x60; // float
        inline constexpr ::std::ptrdiff_t aimconeCurve = 0x68; // AnimationCurve
        inline constexpr ::std::ptrdiff_t aimconeProbabilityCurve = 0x70; // AnimationCurve
        inline constexpr ::std::ptrdiff_t newRecoilOverride = 0x78; // RecoilProperties
    } // namespace RecoilProperties
    namespace BaseFishingRod {
        inline constexpr ::std::ptrdiff_t FishingBobberRef = 0x1F8; // GameObjectRef
        inline constexpr ::std::ptrdiff_t FishCatchDistance = 0x200; // float
        inline constexpr ::std::ptrdiff_t ReelLineRenderer = 0x208; // LineRenderer
        inline constexpr ::std::ptrdiff_t LineRendererWorldStartPos = 0x210; // Transform
        inline constexpr ::std::ptrdiff_t CurrentState = 0x218; // BaseFishingRod.CatchState
        inline constexpr ::std::ptrdiff_t currentFishState = 0x21C; // BaseFishingRod.FishState
        inline constexpr ::std::ptrdiff_t currentBobber = 0x220; // EntityRef<FishingBobber>
        inline constexpr ::std::ptrdiff_t ConditionLossOnSuccess = 0x230; // float
        inline constexpr ::std::ptrdiff_t ConditionLossOnFail = 0x234; // float
        inline constexpr ::std::ptrdiff_t GlobalStrainSpeedMultiplier = 0x238; // float
        inline constexpr ::std::ptrdiff_t MaxCastDistance = 0x23C; // float
        inline constexpr ::std::ptrdiff_t ForceFish = 0x240; // ItemModFishable
        inline constexpr ::std::ptrdiff_t BobberPreview = 0x248; // GameObjectRef
        inline constexpr ::std::ptrdiff_t onLineSoundDef = 0x250; // SoundDefinition
        inline constexpr ::std::ptrdiff_t strainSoundDef = 0x258; // SoundDefinition
        inline constexpr ::std::ptrdiff_t strainGainCurve = 0x260; // AnimationCurve
        inline constexpr ::std::ptrdiff_t tensionBreakSoundDef = 0x268; // SoundDefinition
        inline constexpr ::std::ptrdiff_t lineRendererPositionsArray = 0x270; // Vector3[]
        inline constexpr ::std::ptrdiff_t lineRendererResultArray = 0x278; // Vector3[]
        inline constexpr ::std::ptrdiff_t lineRendererSlack = 0x280; // float[]
        inline constexpr ::std::ptrdiff_t clientStrainAmountNormalised = 0x288; // float
        inline constexpr ::std::ptrdiff_t canCancel = 0x28C; // TimeUntil
        inline constexpr ::std::ptrdiff_t rodViewModel = 0x290; // FishingRodViewmodel
        inline constexpr ::std::ptrdiff_t spawnedPreview = 0x298; // BobberPreview
        inline constexpr ::std::ptrdiff_t aimAnimationReady = 0x2A0; // bool
        inline constexpr ::std::ptrdiff_t onLineSound = 0x2A8; // Sound
        inline constexpr ::std::ptrdiff_t strainSound = 0x2B0; // Sound
        inline constexpr ::std::ptrdiff_t strainGainMod = 0x2B8; // SoundModulation.Modulator
        inline constexpr ::std::ptrdiff_t consumingBackMovement = 0x2C0; // TimeUntil
        inline constexpr ::std::ptrdiff_t reelInAnimTimer = 0x2C4; // TimeSince
    } // namespace BaseFishingRod
    namespace FishingBobber {
        inline constexpr ::std::ptrdiff_t centerOfMass = 0x240; // Transform
        inline constexpr ::std::ptrdiff_t myRigidBody = 0x248; // Rigidbody
        inline constexpr ::std::ptrdiff_t lineAttachPoint = 0x250; // Transform
        inline constexpr ::std::ptrdiff_t bobberRoot = 0x258; // Transform
        inline constexpr ::std::ptrdiff_t HorizontalMoveSpeed = 0x260; // float
        inline constexpr ::std::ptrdiff_t PullAwayMoveSpeed = 0x264; // float
        inline constexpr ::std::ptrdiff_t SidewaysInputForce = 0x268; // float
        inline constexpr ::std::ptrdiff_t ReelInMoveSpeed = 0x26C; // float
        inline constexpr ::std::ptrdiff_t fishLerp = 0x270; // float
        inline constexpr ::std::ptrdiff_t lastPosition = 0x274; // Vector3
    } // namespace FishingBobber
} // namespace blazedumper
