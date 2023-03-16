#pragma once
#include <cstdint>

namespace blazedumper {
    inline constexpr ::std::ptrdiff_t BaseEntity_TypeInfo = 0x2EDF718;
    inline constexpr ::std::ptrdiff_t Facepunch_Input_TypeInfo = 0x2F2CCA0;
    inline constexpr ::std::ptrdiff_t MainCamera_TypeInfo = 0x2F3E430;
    inline constexpr ::std::ptrdiff_t System_Collections_Generic_List_BaseGameMode_TypeInfo = 0x2F1D0C0;
    inline constexpr ::std::ptrdiff_t BaseGameMode_TypeInfo = 0x2EDF988;
    namespace BasePlayer {
        inline constexpr ::std::ptrdiff_t __menuOption_Climb = 0x240; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Drink = 0x298; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_InviteToTeam = 0x2F0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_AssistPlayer = 0x348; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Menu_LootPlayer = 0x3A0; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_Promote = 0x3F8; // Option
        inline constexpr ::std::ptrdiff_t __menuOption_SaltWater = 0x450; // Option
        inline constexpr ::std::ptrdiff_t playerModel = 0x4A8; // PlayerModel
        inline constexpr ::std::ptrdiff_t Frozen = 0x4B0; // bool
        inline constexpr ::std::ptrdiff_t voiceRecorder = 0x4B8; // PlayerVoiceRecorder
        inline constexpr ::std::ptrdiff_t voiceSpeaker = 0x4C0; // PlayerVoiceSpeaker
        inline constexpr ::std::ptrdiff_t input = 0x4C8; // PlayerInput
        inline constexpr ::std::ptrdiff_t movement = 0x4D0; // BaseMovement
        inline constexpr ::std::ptrdiff_t collision = 0x4D8; // BaseCollision
        inline constexpr ::std::ptrdiff_t _lookingAt = 0x4E0; // GameObject
        inline constexpr ::std::ptrdiff_t _lookingAtEntity = 0x4E8; // BaseEntity
        inline constexpr ::std::ptrdiff_t _lookingAtCollider = 0x4F0; // Collider
        inline constexpr ::std::ptrdiff_t lookingAtPoint = 0x4F8; // Vector3
        inline constexpr ::std::ptrdiff_t wakeTime = 0x504; // float
        inline constexpr ::std::ptrdiff_t needsClothesRebuild = 0x508; // bool
        inline constexpr ::std::ptrdiff_t wasSleeping = 0x509; // bool
        inline constexpr ::std::ptrdiff_t wokeUpBefore = 0x50A; // bool
        inline constexpr ::std::ptrdiff_t wasDead = 0x50B; // bool
        inline constexpr ::std::ptrdiff_t lastClothesHash = 0x50C; // uint
        inline constexpr ::std::ptrdiff_t lastOpenSoundPlay = 0x510; // TimeSince
        inline constexpr ::std::ptrdiff_t currentViewMode = 0x514; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t selectedViewMode = 0x518; // BasePlayer.CameraMode
        inline constexpr ::std::ptrdiff_t lastRevivePoint = 0x51C; // Vector3
        inline constexpr ::std::ptrdiff_t lastReviveDirection = 0x528; // Vector3
        inline constexpr ::std::ptrdiff_t IsWearingDiveGoggles = 0x534; // bool
        inline constexpr ::std::ptrdiff_t GestureViewModel = 0x538; // ViewModel
        inline constexpr ::std::ptrdiff_t timeSinceUpdatedLookingAt = 0x540; // RealTimeSince
        inline constexpr ::std::ptrdiff_t nextTopologyTestTime = 0x544; // float
        inline constexpr ::std::ptrdiff_t usePressTime = 0x548; // float
        inline constexpr ::std::ptrdiff_t useHeldTime = 0x54C; // float
        inline constexpr ::std::ptrdiff_t lookingAtTest = 0x550; // HitTest
        inline constexpr ::std::ptrdiff_t cachedWaterDrinkingPoint = 0x558; // Vector3
        inline constexpr ::std::ptrdiff_t gestureList = 0x568; // GestureCollection
        inline constexpr ::std::ptrdiff_t gestureFinishedTime = 0x570; // TimeUntil
        inline constexpr ::std::ptrdiff_t blockHeldInputTimer = 0x574; // TimeSince
        inline constexpr ::std::ptrdiff_t currentGesture = 0x578; // GestureConfig
        inline constexpr ::std::ptrdiff_t disabledHeldEntity = 0x580; // HeldEntity
        inline constexpr ::std::ptrdiff_t nextGestureMenuOpenTime = 0x588; // float
        inline constexpr ::std::ptrdiff_t lastGestureCancel = 0x58C; // TimeSince
        inline constexpr ::std::ptrdiff_t client_lastHelloTime = 0x590; // float
        inline constexpr ::std::ptrdiff_t currentTeam = 0x598; // ulong
        inline constexpr ::std::ptrdiff_t clientTeam = 0x5A0; // PlayerTeam
        inline constexpr ::std::ptrdiff_t lastReceivedTeamTime = 0x5A8; // float
        inline constexpr ::std::ptrdiff_t lastPresenceTeamId = 0x5B0; // ulong
        inline constexpr ::std::ptrdiff_t lastPresenceTeamSize = 0x5B8; // int
        inline constexpr ::std::ptrdiff_t playerGroupKey = 0x5C0; // string
        inline constexpr ::std::ptrdiff_t playerGroupSizeKey = 0x5C8; // string
        inline constexpr ::std::ptrdiff_t clActiveItem = 0x5D0; // uint
        inline constexpr ::std::ptrdiff_t ClientCurrentMapNote = 0x5D8; // MapNote
        inline constexpr ::std::ptrdiff_t ClientCurrentDeathNote = 0x5E0; // MapNote
        inline constexpr ::std::ptrdiff_t missions = 0x5E8; // List<BaseMission.MissionInstance>
        inline constexpr ::std::ptrdiff_t _activeMission = 0x5F0; // int
        inline constexpr ::std::ptrdiff_t modelState = 0x5F8; // ModelState
        inline constexpr ::std::ptrdiff_t mounted = 0x600; // EntityRef
        inline constexpr ::std::ptrdiff_t nextSeatSwapTime = 0x610; // float
        inline constexpr ::std::ptrdiff_t PetEntity = 0x618; // BaseEntity
        inline constexpr ::std::ptrdiff_t lastPetCommandIssuedTime = 0x620; // float
        inline constexpr ::std::ptrdiff_t PetPrefabID = 0x624; // uint
        inline constexpr ::std::ptrdiff_t PetID = 0x628; // uint
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilegeTime = 0x62C; // float
        inline constexpr ::std::ptrdiff_t cachedBuildingPrivilege = 0x630; // BuildingPrivlidge
        inline constexpr ::std::ptrdiff_t maxProjectileID = 0x638; // int
        inline constexpr ::std::ptrdiff_t lastUpdateTime = 0x63C; // float
        inline constexpr ::std::ptrdiff_t cachedThreatLevel = 0x640; // float
        inline constexpr ::std::ptrdiff_t serverTickRate = 0x644; // int
        inline constexpr ::std::ptrdiff_t clientTickRate = 0x648; // int
        inline constexpr ::std::ptrdiff_t serverTickInterval = 0x64C; // float
        inline constexpr ::std::ptrdiff_t clientTickInterval = 0x650; // float
        inline constexpr ::std::ptrdiff_t lastSentTickTime = 0x654; // float
        inline constexpr ::std::ptrdiff_t lastTickStopwatch = 0x658; // Stopwatch
        inline constexpr ::std::ptrdiff_t lastSentTick = 0x660; // PlayerTick
        inline constexpr ::std::ptrdiff_t nextVisThink = 0x668; // float
        inline constexpr ::std::ptrdiff_t lastTimeSeen = 0x66C; // float
        inline constexpr ::std::ptrdiff_t debugPrevVisible = 0x670; // bool
        inline constexpr ::std::ptrdiff_t fallDamageEffect = 0x678; // GameObjectRef
        inline constexpr ::std::ptrdiff_t drownEffect = 0x680; // GameObjectRef
        inline constexpr ::std::ptrdiff_t playerFlags = 0x688; // BasePlayer.PlayerFlags
        inline constexpr ::std::ptrdiff_t eyes = 0x690; // PlayerEyes
        inline constexpr ::std::ptrdiff_t inventory = 0x698; // PlayerInventory
        inline constexpr ::std::ptrdiff_t blueprints = 0x6A0; // PlayerBlueprints
        inline constexpr ::std::ptrdiff_t metabolism = 0x6A8; // PlayerMetabolism
        inline constexpr ::std::ptrdiff_t modifiers = 0x6B0; // PlayerModifiers
        inline constexpr ::std::ptrdiff_t playerCollider = 0x6B8; // CapsuleCollider
        inline constexpr ::std::ptrdiff_t Belt = 0x6C0; // PlayerBelt
        inline constexpr ::std::ptrdiff_t playerRigidbody = 0x6C8; // Rigidbody
        inline constexpr ::std::ptrdiff_t userID = 0x6D0; // ulong
        inline constexpr ::std::ptrdiff_t UserIDString = 0x6D8; // string
        inline constexpr ::std::ptrdiff_t gamemodeteam = 0x6E0; // int
        inline constexpr ::std::ptrdiff_t reputation = 0x6E4; // int
        inline constexpr ::std::ptrdiff_t _displayName = 0x6E8; // string
        inline constexpr ::std::ptrdiff_t _lastSetName = 0x6F0; // string
        inline constexpr ::std::ptrdiff_t playerColliderStanding = 0x6F8; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderDucked = 0x70C; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderCrawling = 0x720; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t playerColliderLyingDown = 0x734; // BasePlayer.CapsuleColliderInfo
        inline constexpr ::std::ptrdiff_t cachedProtection = 0x748; // ProtectionProperties
        inline constexpr ::std::ptrdiff_t lastHeadshotSoundTime = 0x750; // float
        inline constexpr ::std::ptrdiff_t nextColliderRefreshTime = 0x754; // float
        inline constexpr ::std::ptrdiff_t clothingBlocksAiming = 0x758; // bool
        inline constexpr ::std::ptrdiff_t clothingMoveSpeedReduction = 0x75C; // float
        inline constexpr ::std::ptrdiff_t clothingWaterSpeedBonus = 0x760; // float
        inline constexpr ::std::ptrdiff_t clothingAccuracyBonus = 0x764; // float
        inline constexpr ::std::ptrdiff_t equippingBlocked = 0x768; // bool
        inline constexpr ::std::ptrdiff_t eggVision = 0x76C; // float
        inline constexpr ::std::ptrdiff_t activeTelephone = 0x770; // PhoneController
        inline constexpr ::std::ptrdiff_t designingAIEntity = 0x778; // BaseEntity
    } // namespace BasePlayer
    namespace BaseEntity {
        inline constexpr ::std::ptrdiff_t ragdoll = 0x78; // Ragdoll
        inline constexpr ::std::ptrdiff_t positionLerp = 0x80; // PositionLerp
        inline constexpr ::std::ptrdiff_t menuOptions = 0x88; // List<Option>
        inline constexpr ::std::ptrdiff_t bounds = 0x90; // Bounds
        inline constexpr ::std::ptrdiff_t impactEffect = 0xA8; // GameObjectRef
        inline constexpr ::std::ptrdiff_t enableSaving = 0xB0; // bool
        inline constexpr ::std::ptrdiff_t syncPosition = 0xB1; // bool
        inline constexpr ::std::ptrdiff_t model = 0xB8; // Model
        inline constexpr ::std::ptrdiff_t flags = 0xC0; // BaseEntity.Flags
        inline constexpr ::std::ptrdiff_t parentBone = 0xC4; // uint
        inline constexpr ::std::ptrdiff_t skinID = 0xC8; // ulong
        inline constexpr ::std::ptrdiff_t _components = 0xD0; // EntityComponentBase[]
        inline constexpr ::std::ptrdiff_t HasBrain = 0xD8; // bool
        inline constexpr ::std::ptrdiff_t _name = 0xE0; // string
        inline constexpr ::std::ptrdiff_t OwnerID = 0xE8; // ulong
        inline constexpr ::std::ptrdiff_t broadcastProtocol = 0xF0; // uint
        inline constexpr ::std::ptrdiff_t links = 0xF8; // List<EntityLink>
        inline constexpr ::std::ptrdiff_t linkedToNeighbours = 0x100; // bool
        inline constexpr ::std::ptrdiff_t _pendingFileRequests = 0x108; // List<BaseEntity.PendingFileRequest>
        inline constexpr ::std::ptrdiff_t updateParentingAction = 0x110; // Action
        inline constexpr ::std::ptrdiff_t addedToParentEntity = 0x118; // BaseEntity
        inline constexpr ::std::ptrdiff_t itemSkin = 0x120; // ItemSkin
        inline constexpr ::std::ptrdiff_t entitySlots = 0x128; // EntityRef[]
        inline constexpr ::std::ptrdiff_t triggers = 0x130; // List<TriggerBase>
        inline constexpr ::std::ptrdiff_t isVisible = 0x138; // bool
        inline constexpr ::std::ptrdiff_t isAnimatorVisible = 0x139; // bool
        inline constexpr ::std::ptrdiff_t isShadowVisible = 0x13A; // bool
        inline constexpr ::std::ptrdiff_t localOccludee = 0x140; // OccludeeSphere
        inline constexpr ::std::ptrdiff_t Weight = 0x160; // float
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
        inline constexpr ::std::ptrdiff_t authorizedPlayers = 0x588; // List<PlayerNameID>
        inline constexpr ::std::ptrdiff_t allowedConstructionItems = 0x590; // List<ItemDefinition>
        inline constexpr ::std::ptrdiff_t cachedProtectedMinutes = 0x598; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepPeriodMinutes = 0x59C; // float
        inline constexpr ::std::ptrdiff_t cachedUpkeepCostFraction = 0x5A0; // float
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
        inline constexpr ::std::ptrdiff_t useEmptyAmmoState = 0x312; // bool
        inline constexpr ::std::ptrdiff_t isBurstWeapon = 0x313; // bool
        inline constexpr ::std::ptrdiff_t canChangeFireModes = 0x314; // bool
        inline constexpr ::std::ptrdiff_t defaultOn = 0x315; // bool
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
        inline constexpr ::std::ptrdiff_t timeSinceReloadFinished = 0x368; // TimeSince
        inline constexpr ::std::ptrdiff_t swaySampleTime = 0x36C; // float
        inline constexpr ::std::ptrdiff_t lastShotTime = 0x370; // float
        inline constexpr ::std::ptrdiff_t reloadPressTime = 0x374; // float
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
        inline constexpr ::std::ptrdiff_t collision = 0x18; // BoxCollider
        inline constexpr ::std::ptrdiff_t censorshipCube = 0x20; // GameObject
        inline constexpr ::std::ptrdiff_t censorshipCubeBreasts = 0x28; // GameObject
        inline constexpr ::std::ptrdiff_t jawBone = 0x30; // GameObject
        inline constexpr ::std::ptrdiff_t neckBone = 0x38; // GameObject
        inline constexpr ::std::ptrdiff_t headBone = 0x40; // GameObject
        inline constexpr ::std::ptrdiff_t eyeController = 0x48; // EyeController
        inline constexpr ::std::ptrdiff_t blinkController = 0x50; // EyeBlink
        inline constexpr ::std::ptrdiff_t SpineBones = 0x58; // Transform[]
        inline constexpr ::std::ptrdiff_t leftFootBone = 0x60; // Transform
        inline constexpr ::std::ptrdiff_t rightFootBone = 0x68; // Transform
        inline constexpr ::std::ptrdiff_t leftHandPropBone = 0x70; // Transform
        inline constexpr ::std::ptrdiff_t rightHandPropBone = 0x78; // Transform
        inline constexpr ::std::ptrdiff_t rightHandTarget = 0x80; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetPosition = 0x8C; // Vector3
        inline constexpr ::std::ptrdiff_t leftHandTargetRotation = 0x98; // Quaternion
        inline constexpr ::std::ptrdiff_t rightHandTargetPosition = 0xA8; // Vector3
        inline constexpr ::std::ptrdiff_t rightHandTargetRotation = 0xB4; // Quaternion
        inline constexpr ::std::ptrdiff_t steeringTargetDegrees = 0xC4; // float
        inline constexpr ::std::ptrdiff_t rightFootTargetPosition = 0xC8; // Vector3
        inline constexpr ::std::ptrdiff_t rightFootTargetRotation = 0xD4; // Quaternion
        inline constexpr ::std::ptrdiff_t leftFootTargetPosition = 0xE4; // Vector3
        inline constexpr ::std::ptrdiff_t leftFootTargetRotation = 0xF0; // Quaternion
        inline constexpr ::std::ptrdiff_t CinematicAnimationController = 0x100; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t DefaultAvatar = 0x108; // Avatar
        inline constexpr ::std::ptrdiff_t CinematicAvatar = 0x110; // Avatar
        inline constexpr ::std::ptrdiff_t DefaultHoldType = 0x118; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t SleepGesture = 0x120; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CrawlToIncapacitatedGesture = 0x128; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t StandToIncapacitatedGesture = 0x130; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t CurrentGesture = 0x138; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t MaleSkin = 0x140; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t FemaleSkin = 0x148; // SkinSetCollection
        inline constexpr ::std::ptrdiff_t subsurfaceProfile = 0x150; // SubsurfaceProfile
        inline constexpr ::std::ptrdiff_t voiceVolume = 0x158; // float
        inline constexpr ::std::ptrdiff_t skinColor = 0x15C; // float
        inline constexpr ::std::ptrdiff_t skinNumber = 0x160; // float
        inline constexpr ::std::ptrdiff_t meshNumber = 0x164; // float
        inline constexpr ::std::ptrdiff_t hairNumber = 0x168; // float
        inline constexpr ::std::ptrdiff_t skinType = 0x16C; // int
        inline constexpr ::std::ptrdiff_t movementSounds = 0x170; // MovementSounds
        inline constexpr ::std::ptrdiff_t showSash = 0x178; // bool
        inline constexpr ::std::ptrdiff_t tempPoseType = 0x17C; // int
        inline constexpr ::std::ptrdiff_t underwearSkin = 0x180; // uint
        inline constexpr ::std::ptrdiff_t overrideSkinSeed = 0x188; // ulong
        inline constexpr ::std::ptrdiff_t AimAngles = 0x190; // Quaternion
        inline constexpr ::std::ptrdiff_t LookAngles = 0x1A0; // Quaternion
        inline constexpr ::std::ptrdiff_t modelState = 0x1B0; // ModelState
        inline constexpr ::std::ptrdiff_t position = 0x1B8; // Vector3
        inline constexpr ::std::ptrdiff_t velocity = 0x1C4; // Vector3
        inline constexpr ::std::ptrdiff_t speedOverride = 0x1D0; // Vector3
        inline constexpr ::std::ptrdiff_t newVelocity = 0x1DC; // Vector3
        inline constexpr ::std::ptrdiff_t rotation = 0x1E8; // Quaternion
        inline constexpr ::std::ptrdiff_t mountedRotation = 0x1F8; // Quaternion
        inline constexpr ::std::ptrdiff_t smoothLeftFootIK = 0x208; // Vector3
        inline constexpr ::std::ptrdiff_t smoothRightFootIK = 0x214; // Vector3
        inline constexpr ::std::ptrdiff_t drawShadowOnly = 0x220; // bool
        inline constexpr ::std::ptrdiff_t isIncapacitated = 0x221; // bool
        inline constexpr ::std::ptrdiff_t flinchLocation = 0x224; // uint
        inline constexpr ::std::ptrdiff_t visible = 0x228; // bool
        inline constexpr ::std::ptrdiff_t nameTag = 0x230; // PlayerNameTag
        inline constexpr ::std::ptrdiff_t animatorNeedsWarmup = 0x238; // bool
        inline constexpr ::std::ptrdiff_t isLocalPlayer = 0x239; // bool
        inline constexpr ::std::ptrdiff_t aimSoundDef = 0x240; // SoundDefinition
        inline constexpr ::std::ptrdiff_t aimEndSoundDef = 0x248; // SoundDefinition
        inline constexpr ::std::ptrdiff_t InGesture = 0x250; // bool
        inline constexpr ::std::ptrdiff_t CurrentGestureConfig = 0x258; // GestureConfig
        inline constexpr ::std::ptrdiff_t InCinematic = 0x260; // bool
        inline constexpr ::std::ptrdiff_t defaultAnimatorController = 0x268; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t _multiMesh = 0x270; // SkinnedMultiMesh
        inline constexpr ::std::ptrdiff_t _animator = 0x278; // Animator
        inline constexpr ::std::ptrdiff_t _lodGroup = 0x280; // LODGroup
        inline constexpr ::std::ptrdiff_t _currentGesture = 0x288; // RuntimeAnimatorController
        inline constexpr ::std::ptrdiff_t holdTypeLock = 0x290; // float
        inline constexpr ::std::ptrdiff_t hasHeldEntity = 0x294; // bool
        inline constexpr ::std::ptrdiff_t wasMountedRightAim = 0x295; // bool
        inline constexpr ::std::ptrdiff_t cachedMask = 0x298; // int
        inline constexpr ::std::ptrdiff_t cachedConstructionMask = 0x29C; // int
        inline constexpr ::std::ptrdiff_t WorkshopHeldEntity = 0x2A0; // HeldEntity
        inline constexpr ::std::ptrdiff_t wasCrawling = 0x2A8; // bool
        inline constexpr ::std::ptrdiff_t mountedSpineLookWeight = 0x2AC; // float
        inline constexpr ::std::ptrdiff_t mountedAnimSpeed = 0x2B0; // float
        inline constexpr ::std::ptrdiff_t preserveBones = 0x2B4; // bool
        inline constexpr ::std::ptrdiff_t blendShapeControllers = 0x2C0; // List<BlendShapeController>
        inline constexpr ::std::ptrdiff_t IsNpc = 0x2C8; // bool
        inline constexpr ::std::ptrdiff_t timeSinceReactionStart = 0x2CC; // TimeSince
        inline constexpr ::std::ptrdiff_t timeSinceLeftFootTest = 0x2D0; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedLeftFootPos = 0x2D4; // Vector3
        inline constexpr ::std::ptrdiff_t cachedLeftFootNormal = 0x2E0; // Vector3
        inline constexpr ::std::ptrdiff_t timeSinceRightFootTest = 0x2EC; // TimeSince
        inline constexpr ::std::ptrdiff_t cachedRightFootPos = 0x2F0; // Vector3
        inline constexpr ::std::ptrdiff_t cachedRightFootNormal = 0x2FC; // Vector3
        inline constexpr ::std::ptrdiff_t _smoothAimWeight = 0x308; // float
        inline constexpr ::std::ptrdiff_t _smoothVelocity = 0x30C; // float
        inline constexpr ::std::ptrdiff_t _smoothlookAngle = 0x310; // Vector3
        inline constexpr ::std::ptrdiff_t allowMountedHeadLook = 0x31C; // bool
        inline constexpr ::std::ptrdiff_t smoothLookDir = 0x320; // Vector3
        inline constexpr ::std::ptrdiff_t lastSafeLookDir = 0x32C; // Vector3
        inline constexpr ::std::ptrdiff_t Shoulders = 0x338; // Transform[]
        inline constexpr ::std::ptrdiff_t AdditionalSpineBones = 0x340; // Transform[]
        inline constexpr ::std::ptrdiff_t LegParts = 0x348; // List<SkinnedMeshRenderer>
        inline constexpr ::std::ptrdiff_t fakeSpineBones = 0x350; // Transform[]
        inline constexpr ::std::ptrdiff_t extraLeanBack = 0x358; // float
        inline constexpr ::std::ptrdiff_t timeInArmsMode = 0x360; // float
    } // namespace PlayerModel
    namespace ModelState {
        inline constexpr ::std::ptrdiff_t waterLevel = 0x10; // float
        inline constexpr ::std::ptrdiff_t lookDir = 0x14; // Vector3
        inline constexpr ::std::ptrdiff_t flags = 0x20; // int
        inline constexpr ::std::ptrdiff_t poseType = 0x24; // int
        inline constexpr ::std::ptrdiff_t inheritedVelocity = 0x28; // Vector3
        inline constexpr ::std::ptrdiff_t ShouldPool = 0x34; // bool
        inline constexpr ::std::ptrdiff_t _disposed = 0x35; // bool
    } // namespace ModelState
    namespace Item {
        inline constexpr ::std::ptrdiff_t _condition = 0x10; // float
        inline constexpr ::std::ptrdiff_t _maxCondition = 0x14; // float
        inline constexpr ::std::ptrdiff_t info = 0x18; // ItemDefinition
        inline constexpr ::std::ptrdiff_t uid = 0x20; // uint
        inline constexpr ::std::ptrdiff_t dirty = 0x24; // bool
        inline constexpr ::std::ptrdiff_t amount = 0x28; // int
        inline constexpr ::std::ptrdiff_t position = 0x2C; // int
        inline constexpr ::std::ptrdiff_t busyTime = 0x30; // float
        inline constexpr ::std::ptrdiff_t removeTime = 0x34; // float
        inline constexpr ::std::ptrdiff_t fuel = 0x38; // float
        inline constexpr ::std::ptrdiff_t isServer = 0x3C; // bool
        inline constexpr ::std::ptrdiff_t instanceData = 0x40; // Item.InstanceData
        inline constexpr ::std::ptrdiff_t skin = 0x48; // ulong
        inline constexpr ::std::ptrdiff_t name = 0x50; // string
        inline constexpr ::std::ptrdiff_t text = 0x58; // string
        inline constexpr ::std::ptrdiff_t cookTimeLeft = 0x60; // float
        inline constexpr ::std::ptrdiff_t progressBar = 0x64; // float
        inline constexpr ::std::ptrdiff_t flags = 0x70; // Item.Flag
        inline constexpr ::std::ptrdiff_t contents = 0x78; // ItemContainer
        inline constexpr ::std::ptrdiff_t parent = 0x80; // ItemContainer
        inline constexpr ::std::ptrdiff_t worldEnt = 0x88; // EntityRef
        inline constexpr ::std::ptrdiff_t heldEntity = 0x98; // EntityRef
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
