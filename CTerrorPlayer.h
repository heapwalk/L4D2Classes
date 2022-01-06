#include "CCSPlayer.h"
#include "CCountdownTimer.h"
#include "CCountdownTimer.h"
#include "CCountdownTimer.h"
#include "CCountdownTimer.h"
#include "CIntervalTimer.h"
#include "CCountdownTimer.h"
#include "CIntervalTimer.h"
#include "CCountdownTimer.h"
#include "CIntervalTimer.h"
#include "CMusic.h"
#include "CIntervalTimer.h"

#pragma pack(push,1)
	class CTerrorPlayer : 
		 public CCSPlayer // 0x1a70
	{
	public:
		bool   	m_yardLineAngles[1]; // 0x0
		unsigned char _0x0[0x8a4];
		int    	m_nSequence; // 0x8a4
		unsigned char _0x8a8[0x11dc];
		float  	m_mainSequenceStartTime; // 0x1a84
		unsigned char _0x1a88[0x4];
		int    	m_fireLayerSequence; // 0x1a8c
		int    	m_reloadLayerSequence; // 0x1a90
		int    	m_reloadAltLayerSequence; // 0x1a94
		int    	m_grenadeLayerSequence; // 0x1a98
		int    	m_flinchLayerSequence; // 0x1a9c
		int    	m_fidgetLayerSequence; // 0x1aa0
		int    	m_reloadLayerNumShells; // 0x1aa4
		float  	m_fireLayerStartTime; // 0x1aa8
		float  	m_reloadLayerStartTime; // 0x1aac
		float  	m_reloadAltLayerStartTime; // 0x1ab0
		float  	m_grenadeLayerStartTime; // 0x1ab4
		float  	m_flinchLayerStartTime; // 0x1ab8
		float  	m_fidgetLayerStartTime; // 0x1abc
		int    	m_hBuildableButtonUseEnt; // 0x1ac0
		unsigned char _0x1ac4[0x38];
		int    	m_NetGestureSequence[7]; // 0x1afc
		int    	m_NetGestureActivity[7]; // 0x1b18
		int    	m_NetGestureStartTime[7]; // 0x1b34
		unsigned char _0x1b50[0x4];
		float  	m_fServerAnimStartTime; // 0x1b54
		unsigned char _0x1b58[0x48];
		int    	m_useActionTarget; // 0x1ba0
		int    	m_useActionOwner; // 0x1ba4
		int    	m_iCurrentUseAction; // 0x1ba8
		unsigned char _0x1bac[0x8];
		float  	m_burnPercent; // 0x1bb4
		float  	m_bbqPercent; // 0x1bb8
		unsigned char _0x1bbc[0x2];
		int    	m_hasVisibleThreats; // 0x1bbe
		unsigned char _0x1bc2[0x5e];
		int    	m_vocalizationSubject; // 0x1c20
		CCountdownTimer	m_vocalizationSubjectTimer; // 0x1c24
		CCountdownTimer	m_noAvoidanceTimer; // 0x1c30
		CCountdownTimer	m_staggerTimer; // 0x1c3c
		vector3	m_staggerStart; // 0x1c48
		vector3	m_staggerDir; // 0x1c54
		float  	m_staggerDist; // 0x1c60
		CCountdownTimer	m_tugTimer; // 0x1c64
		vector3	m_tugStart; // 0x1c70
		vector3	m_tugDir; // 0x1c7c
		float  	m_tugDist; // 0x1c88
		int    	m_survivorCharacter; // 0x1c8c
		int    	m_zombieClass; // 0x1c90
		int    	m_zombieState; // 0x1c94
		int    	m_isCulling; // 0x1c98
		int    	m_isRelocating; // 0x1c99
		int    	m_isGhost; // 0x1c9a
		int    	m_ghostSpawnState; // 0x1c9c
		int    	m_ghostSpawnClockMaxDelay; // 0x1ca0
		int    	m_ghostSpawnClockCurrentDelay; // 0x1ca4
		float  	m_flNextShoveTime; // 0x1ca8
		int    	m_iShovePenalty; // 0x1cac
		unsigned char _0x1cb0[0x4];
		vector3	m_scrimmageSphereCenter; // 0x1cb4
		float  	m_scrimmageSphereInitialRadius; // 0x1cc0
		float  	m_scrimmageStartTime; // 0x1cc4
		float  	m_survivorsLineOfScrimmageDistance; // 0x1cc8
		int    	m_scrimmageType; // 0x1ccc
		vector3	m_lineOfScrimmagePos; // 0x1cd0
		vector3	m_lineOfScrimmageAngle; // 0x1cdc
		unsigned char _0x1ce8[0x14];
		vector3	m_rearLineOfScrimmagePos; // 0x1cfc
		vector3	m_rearLineOfScrimmageAngle; // 0x1d08
		unsigned char _0x1d14[0x14];
		vector3	m_yardLinePos_0; // 0x1d28
		unsigned char _0x1d34[0x30];
		vector3	m_yardLineAngles_0; // 0x1d64
		unsigned char _0x1d70[0x138];
		int    	m_isInMissionStartArea; // 0x1ea8
		int    	m_isIncapacitated; // 0x1ea9
		vector3	m_shoveForce; // 0x1eac
		int    	m_airMovementRestricted; // 0x1eb8
		int    	m_isCalm; // 0x1eb9
		int    	m_usingMountedGun; // 0x1eba
		int    	m_usingMountedWeapon; // 0x1ebb
		int    	m_currentReviveCount; // 0x1ebc
		int    	m_bIsOnThirdStrike; // 0x1ec0
		int    	m_bIsFirstManOut; // 0x1ec1
		int    	m_clientIntensity; // 0x1ec4
		int    	m_isAutoCrouchEnabled; // 0x1ec8
		CIntervalTimer	m_autoCrouchTimer; // 0x1ecc
		int    	m_customAbility; // 0x1ed4
		CCountdownTimer	m_stunTimer; // 0x1ed8
		unsigned char _0x1ee4[0x84];
		int    	m_tongueVictim; // 0x1f68
		int    	m_tongueOwner; // 0x1f6c
		CIntervalTimer	m_tongueVictimTimer; // 0x1f70
		vector3	m_initialTonguePullDir; // 0x1f78
		int    	m_isHangingFromTongue; // 0x1f84
		int    	m_reachedTongueOwner; // 0x1f85
		int    	m_isProneTongueDrag; // 0x1f86
		int    	m_reviveOwner; // 0x1f88
		int    	m_reviveTarget; // 0x1f8c
		unsigned char _0x1f90[0x4];
		int    	m_dragTarget; // 0x1f94
		int    	m_positionEntity; // 0x1f98
		int    	m_bSurvivorPositionHidingWeapons; // 0x1f9c
		int    	m_pushEntity; // 0x1fa0
		float  	m_pushDistance; // 0x1fa4
		int    	m_holdingObject; // 0x1fa8
		float  	m_healthBuffer; // 0x1fac
		float  	m_healthBufferTime; // 0x1fb0
		int    	m_isGoingToDie; // 0x1fb4
		float  	m_noiseLevel; // 0x1fb8
		int    	m_noiseLevelLatch; // 0x1fbc
		unsigned char _0x1fc0[0x8];
		int    	m_iBloodyHandsLevel; // 0x1fc8
		CCountdownTimer	m_itTimer; // 0x1fcc
		int    	m_bAdrenalineActive; // 0x1fd8
		int    	m_iMaxHealth; // 0x1fdc
		int    	m_checkpointAwardCounts_0; // 0x1fe0
		unsigned char _0x1fe4[0x250];
		int    	m_missionAwardCounts_0; // 0x2234
		unsigned char _0x2238[0x250];
		int    	m_checkpointZombieKills_0; // 0x2488
		unsigned char _0x248c[0x20];
		int    	m_missionZombieKills_0; // 0x24ac
		unsigned char _0x24b0[0x20];
		int    	m_checkpointSurvivorDamage; // 0x24d0
		int    	m_missionSurvivorDamage; // 0x24d4
		int    	m_classSpawnCount_0; // 0x24d8
		unsigned char _0x24dc[0x20];
		float  	m_maxDeadDuration; // 0x24fc
		float  	m_totalDeadDuration; // 0x2500
		float  	m_jumpSupressedUntil; // 0x2504
		int    	m_checkpointMedkitsUsed; // 0x2508
		int    	m_missionMedkitsUsed; // 0x250c
		int    	m_checkpointPillsUsed; // 0x2510
		int    	m_missionPillsUsed; // 0x2514
		int    	m_checkpointMolotovsUsed; // 0x2518
		int    	m_missionMolotovsUsed; // 0x251c
		int    	m_checkpointPipebombsUsed; // 0x2520
		int    	m_missionPipebombsUsed; // 0x2524
		int    	m_checkpointBoomerBilesUsed; // 0x2528
		int    	m_missionBoomerBilesUsed; // 0x252c
		int    	m_checkpointAdrenalinesUsed; // 0x2530
		int    	m_missionAdrenalinesUsed; // 0x2534
		int    	m_checkpointDefibrillatorsUsed; // 0x2538
		int    	m_missionDefibrillatorsUsed; // 0x253c
		int    	m_checkpointDamageTaken; // 0x2540
		int    	m_missionDamageTaken; // 0x2544
		int    	m_checkpointReviveOtherCount; // 0x2548
		int    	m_missionReviveOtherCount; // 0x254c
		int    	m_checkpointFirstAidShared; // 0x2550
		int    	m_missionFirstAidShared; // 0x2554
		int    	m_checkpointIncaps; // 0x2558
		int    	m_missionIncaps; // 0x255c
		int    	m_checkpointDamageToTank; // 0x2560
		int    	m_checkpointDamageToWitch; // 0x2564
		int    	m_checkpointHeadshots; // 0x2568
		int    	m_checkpointHeadshotAccuracy; // 0x256c
		int    	m_missionHeadshotAccuracy; // 0x2570
		unsigned char _0x2574[0x4];
		int    	m_missionAccuracy; // 0x2578
		int    	m_checkpointDeaths; // 0x257c
		int    	m_missionDeaths; // 0x2580
		int    	m_checkpointMeleeKills; // 0x2584
		int    	m_missionMeleeKills; // 0x2588
		int    	m_checkpointPZIncaps; // 0x258c
		int    	m_checkpointPZTankDamage; // 0x2590
		int    	m_checkpointPZHunterDamage; // 0x2594
		int    	m_checkpointPZSmokerDamage; // 0x2598
		int    	m_checkpointPZBoomerDamage; // 0x259c
		int    	m_checkpointPZJockeyDamage; // 0x25a0
		int    	m_checkpointPZSpitterDamage; // 0x25a4
		int    	m_checkpointPZChargerDamage; // 0x25a8
		int    	m_checkpointPZKills; // 0x25ac
		int    	m_checkpointPZPounces; // 0x25b0
		int    	m_checkpointPZPushes; // 0x25b4
		int    	m_checkpointPZTankPunches; // 0x25b8
		int    	m_checkpointPZTankThrows; // 0x25bc
		int    	m_checkpointPZHung; // 0x25c0
		int    	m_checkpointPZPulled; // 0x25c4
		int    	m_checkpointPZBombed; // 0x25c8
		int    	m_checkpointPZVomited; // 0x25cc
		int    	m_checkpointPZHighestDmgPounce; // 0x25d0
		int    	m_checkpointPZLongestSmokerGrab; // 0x25d4
		int    	m_checkpointPZLongestJockeyRide; // 0x25d8
		int    	m_checkpointPZNumChargeVictims; // 0x25dc
		unsigned char _0x25e0[0xc];
		int    	m_isHangingFromLedge; // 0x25ec
		int    	m_isFallingFromLedge; // 0x25ed
		CIntervalTimer	m_hangTimer; // 0x25f0
		int    	m_nVariantType; // 0x25f8
		float  	m_TimeForceExternalView; // 0x25fc
		vector3	m_hangAirPos; // 0x2600
		vector3	m_hangPos; // 0x260c
		vector3	m_hangStandPos; // 0x2618
		vector3	m_hangNormal; // 0x2624
		unsigned char _0x2630[0x48];
		int    	m_frustration; // 0x2678
		CMusic	m_music; // 0x267c
		unsigned char _0x26b8[0x5c];
		int    	m_carryAttacker; // 0x2714
		int    	m_carryVictim; // 0x2718
		int    	m_pummelVictim; // 0x271c
		int    	m_pummelAttacker; // 0x2720
		int    	m_queuedPummelVictim; // 0x2724
		int    	m_pounceVictim; // 0x2728
		int    	m_pounceAttacker; // 0x272c
		int    	m_isAttemptingToPounce; // 0x2730
		vector3	m_pounceStartPosition; // 0x2734
		unsigned char _0x2740[0x8];
		int    	m_jockeyVictim; // 0x2748
		int    	m_jockeyAttacker; // 0x274c
		unsigned char _0x2750[0x8];
		vector3	m_jockeyDesiredMove; // 0x2758
		int    	m_jockeyFirmAttach; // 0x2764
		int    	m_jockeyRotatedDesire; // 0x2765
		int    	m_knockdownReason; // 0x2768
		CIntervalTimer	m_knockdownTimer; // 0x276c
		unsigned char _0x2774[0x7c];
		float  	m_vomitStart; // 0x27f0
		unsigned char _0x27f4[0x4];
		float  	m_vomitFadeStart; // 0x27f8
		float  	m_bashedStart; // 0x27fc
		float  	m_salivaStart; // 0x2800
		unsigned char _0x2804[0x118];
		int    	m_iVersusTeam; // 0x291c
		unsigned char _0x2920[0x4];
		int    	m_lookatPlayer; // 0x2924
		unsigned char _0x2928[0x10];
		int    	m_bWasPresentAtSurvivalStart; // 0x2938
		int    	m_bSurvivorGlowEnabled; // 0x2939
	};
#pragma pack(pop)
