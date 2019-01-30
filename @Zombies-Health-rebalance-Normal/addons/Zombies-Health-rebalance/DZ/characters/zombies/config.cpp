class CfgPatches
{
	class DZ_Characters_Zombies
	{
		units[]=
		{
			"Hermit_NewAI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class DZ_LightAI;
	class DayZInfected: DZ_LightAI
	{
	};
	class ZombieBase: DayZInfected
	{
		scope=0;
		armor=2;
		armorStructural=2;
		faction="dz_Civ_US";
		rarityUrban=-1;
		simulation="dayzinfected";
		attachments[]=
		{
			"Melee",
			"Vest",
			"Back",
			"Headgear",
			"Mask",
			"Eyewear"
		};
		class enfanimsys
		{
			meshObject="dz\characters\zombies\z_hermit_m.xob";
			graphname="dz\anims\workspaces\infected\infected_main\infected.agr";
			defaultinstance="dz\anims\workspaces\infected\infected_main\infected_main.asi";
			skeletonName="hermit_newbindpose.xob";
			startnode="MasterControl";
		};
		class InputController
		{
			movementSpeedMapping[]={0,1.5,2.9000001,8.8999996};
			lookAtFilterTimeout=0.5;
			lookAtFilterSpeed=1.5700001;
		};
		accuracy=0;
		threat[]={1,0.050000001,0.050000001};
		
		displayName = "$STR_cfgvehicles_infected0";
		descriptionShort = "$STR_cfgvehicles_infected1";
		vehicleClass = "Zombie";
		model = "\DZ\characters\zombies\hermit_newbindpose.p3d";
		zombieLoot = "civilian";
		storageCategory = 3;
		attackSounds = "zombie_attack";
		spottedSounds = "zombie_spotted";
		chaseSounds = "zombie_chase";
		idleSounds = "zombie_idle";
		hiddenSelections[] =
		{
							"camo"
						};
		languages[] = {};
		
		woman=0;
		htMin=60; // 60
		htMax=1800; // 1800
		afMax=30;
		mfMax=0;
		mFact=1;
		tBody=37;
		glassesEnabled=0;

		selectionPersonality="personality";		
		gestures = "CfgGesturesMale";
		faceType = "MaleWhiteHeadNew";
		identityTypes[] =
		{
								"zombie1",
								"zombie2"
							};
		boneHead = "head";
		boneHeadCutScene = "headcutscene";
		boneLEye = "eyeleft";
		boneREye = "eyeright";
		boneLEyelidUp = "face_eyelidupperleft";
		boneREyelidUp = "face_eyelidupperright";
		boneLEyelidDown = "face_eyelidlowerleft";
		boneREyelidDown = "face_eyelidlowerright";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		bonePrimaryWeapon = "weapon";
		launcherBone = "launcher";
		handGunBone = "RightHand";
		weaponBone = "weapon";
		selectionHeadWound = "injury_head";
		selectionBodyWound = "injury_body";
		selectionLArmWound = "injury_hands";
		selectionRArmWound = "injury_hands";
		selectionLLegWound = "injury_legs";
		selectionRLegWound = "injury_legs";
		memoryPointLStep = "footstepL";
		memoryPointRStep = "footstepR";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		memoryPointCommonDamage = "l_femur_hit";
		memoryPointLeaningAxis = "leaning_axis";
		memoryPointAimingAxis = "aiming_axis";
		memoryPointHeadAxis = "head_axis";
		selectionLBrow = "lBrow";
		selectionMBrow = "mBrow";
		selectionRBrow = "rBrow";
		selectionLMouth = "lMouth";
		selectionMMouth = "mMouth";
		selectionRMouth = "rMouth";
		selectionEyelid = "Eyelids";
		selectionLip = "LLip";
		leftArmToElbow[] =
		{
								"LeftArm",
								0.5,
								"LeftArmExtra",
								0.5,
								"LeftArmRoll",
								0
							};
		leftArmFromElbow[] =
		{
								"LeftElbowExtra",
								0.5,
								"LeftForeArm",
								0.5,
								"LeftForeArmExtra",
								0.5,
								"LeftForeArmRoll",
								0.5,
								"leftWristExtra",
								0.5
							};
		leftWrist = "LeftHand";
		leftShoulder = "LeftShoulder";
		leftHand[] =
		{
								"leftHandThumb3",
								"leftHandThumb2",
								"leftHandThumb1",
								"leftHandIndex3",
								"leftHandIndex2",
								"leftHandIndex1",
								"leftHandMiddle3",
								"leftHandMiddle2",
								"leftHandMiddle1",
								"leftHandRing3",
								"leftHandRing2",
								"leftHandRing1",
								"leftHandRing",
								"leftHandPinky3",
								"leftHandPinky2",
								"leftHandPinky1"
							};
		leftArmPoints[] =
		{
								"LeftShoulder",
								"lelbow",
								"lelbow_axis",
								"lwrist"
							};
		rightArmToElbow[] =
		{
								"rightArm",
								0.5,
								"RightArmExtra",
								0.5,
								"rightArmRoll",
								0
							};
		rightArmFromElbow[] =
		{
								"RightElbowExtra",
								0.5,
								"rightForeArm",
								0.5,
								"RightForeArmExtra",
								0.5,
								"rightForeArmRoll",
								0.5,
								"rightWristExtra",
								0.5
							};
		rightWrist = "rightHand";
		rightShoulder = "rightShoulder";
		rightHand[] =
		{
								"rightHandThumb3",
								"rightHandThumb2",
								"rightHandThumb1",
								"rightHandIndex3",
								"rightHandIndex2",
								"rightHandIndex1",
								"rightHandMiddle3",
								"rightHandMiddle2",
								"rightHandMiddle1",
								"rightHandRing3",
								"rightHandRing2",
								"rightHandRing1",
								"rightHandRing",
								"rightHandPinky3",
								"rightHandPinky2",
								"rightHandPinky1"
							};
		rightArmPoints[] =
		{
								"rightShoulder",
								"relbow",
								"relbow_axis",
								"rwrist"
							};
		leftLegToKnee[] =
		{
								"LeftUpLeg",
								0.5,
								"LeftUpLegRoll",
								0
							};
		leftLegFromKnee[] =
		{
								"LeftLeg",
								0,
								"LeftLegRoll",
								0.5
							};
		leftHeel = "leftFoot";
		leftHip = "pelvis";
		leftFoot[] =
		{
								"LeftToeBase"
							};
		leftLegPoints[] =
		{
								"lfemur",
								"lknee",
								"lknee_axis",
								"lankle"
							};
		rightLegToKnee[] =
		{
								"rightUpLeg",
								0.5,
								"rightUpLegRoll",
								0
							};
		rightLegFromKnee[] =
		{
								"rightLeg",
								0,
								"rightLegRoll",
								0.5
							};
		rightHeel = "rightFoot";
		rightHip = "pelvis";
		rightFoot[] =
		{
								"RightToeBase"
							};
		rightLegPoints[] =
		{
								"rfemur",
								"rknee",
								"rknee_axis",
								"rankle"
							};
							
		class InventoryEquipment
		{
			playerSlots[]=
			{
				"Slot_Melee",
				"Slot_Vest",
				"Slot_Back",
				"Slot_Headgear",
				"Slot_Mask",
				"Slot_Eyewear"
			};
		};
		class Cargo
		{
			itemsCargoSize[]={3,4};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\zombies\data\coveralls.rvmat",
				"dz\characters\zombies\data\coveralls_injury.rvmat",
				"dz\characters\zombies\data\coveralls_injury.rvmat"
			};
		};
		class HitDamage
		{
			class Group0
			{
				hitSounds[]={};
				damageSounds[]={};
			};
			class Group1
			{
				hitSounds[]={};
				damageSounds[]={};
			};
			class Group2
			{
				hitSounds[]={};
				damageSounds[]={};
			};
			class Group3
			{
				hitSounds[]={};
				damageSounds[]={};
			};
		};
		class HitPoints
		{
			class HitHead
			{
				armor=1;
				material=-1;
				name="head_hit";
				passThrough=1;
				memoryPoint="pilot";
			};
			class HitBody: HitHead
			{
				armor=1; //1.6
				name="body";
				memoryPoint="aimPoint";
			};
			class HitSpine: HitHead
			{
				armor=1; //1.6
				name="Spine2";
				memoryPoint="aimPoint";
			};
			class HitHands: HitHead
			{
				armor=1;
				material=-1;
				name="hands";
				passThrough=1;
			};
			class HitLArm: HitHands
			{
				name="LeftArm";
				memoryPoint="lelbow";
			};
			class HitRArm: HitHands
			{
				name="RightArm";
				memoryPoint="relbow";
			};
			class HitLForeArm: HitHands
			{
				name="LeftForeArm";
				memoryPoint="lwrist";
			};
			class HitRForeArm: HitHands
			{
				name="RightForeArm";
				memoryPoint="rwrist";
			};
			class HitLHand: HitHands
			{
				name="LeftHand";
				memoryPoint="LeftHandMiddle1";
			};
			class HitRHand: HitHands
			{
				name="RightHand";
				memoryPoint="RightHandMiddle1";
			};
			class HitLegs: HitHands
			{
				name="legs";
				memoryPoint="pelvis";
			};
			class HitLLeg: HitHands
			{
				name="LeftLeg";
				memoryPoint="lknee";
			};
			class HitLLegUp: HitHands
			{
				name="LeftUpLeg";
				memoryPoint="lfemur";
			};
			class HitRLeg: HitHands
			{
				name="RightLeg";
				memoryPoint="rknee";
			};
			class HitRLegUp: HitHands
			{
				name="RightUpLeg";
				memoryPoint="rfemur";
			};
		};
		aiAgentTemplate="Infected";
		class NoiseTemplates
		{
			class StepNoise
			{
				strength=10;
				type="sound";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50; //50
					healthLevels[]=
					{
						
						{
							1,
							{}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							{}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"Head"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef=-1;
					transferToZonesNames[]=
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[]={0,0,0};
					inventorySlots[]=
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef=-1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					componentNames[]=
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					transferToZonesNames[]=
					{
						"LeftLeg"
					};
					transferToZonesCoefs[]={1};
					componentNames[]=
					{
						"LeftFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints=100; 
						transferToGlobalCoef=1;
					};
					transferToZonesNames[]=
					{
						"RightLeg"
					};
					transferToZonesCoefs[]={1};
					componentNames[]=
					{
						"RightFoot"
					};
					fatalInjuryCoef=-1;
					inventorySlots[]=
					{
						"Feet"
					};
				};
			};
		};
	};

	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////

	class ZombieFemaleBase: ZombieBase
	{
		scope=0;
		meleeAmmo="MeleeZombieFemale";
		sensitivity=2.5;
		sensitivityEar=0.2;
		minIdleStayTime=1;
		maxIdleStayTime=2;
		minRoamRange=60;
		maxRoamRange=90;
		aiAgentTemplate="InfectedFemale";
		class Wounds: Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\zombies\data\shortskirt.rvmat",
				"dz\characters\zombies\data\shortskirt_injury.rvmat",
				"dz\characters\zombies\data\shortskirt_injury.rvmat"
			};
		};
		
		class AttackActions
		{
			class AttackLong
			{
				attackName="attackLong";
				ammoType="MeleeZombieFemale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.75;
				distance=1.75;
				time=2.5;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=2.2;
				repeatable=0;
				cooldown=2.75;
			};
			class AttackRun
			{
				attackName="attackRun";
				ammoType="MeleeZombieFemale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShort
			{
				attackName="attackShort";
				ammoType="MeleeZombieFemale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShortLow
			{
				attackName="attackShortLow";
				ammoType="MeleeZombieFemale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk",
					"run"
				};
				minDistance=0;
				distance=2;
				time=1;
				yawAngle=0;
				pitchAngle=-45;
				attackWidth=2;
				repeatable=1;
				cooldown=1.25;
			};
			class CrawlAttackMove
			{
				attackName="crawlAttackMove";
				ammoType="MeleeZombieFemale";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"walk"
				};
				distance=2;
				time=1.5;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
			class CrawlAttackStill
			{
				attackName="crawlAttackStill";
				ammoType="MeleeZombieFemale";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"idle"
				};
				distance=2;
				time=1.1;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
		};
	};

	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////

	class ZombieMaleBase: ZombieBase
	{
		scope=0;
		meleeAmmo="MeleeZombieMale";
		sensitivity=2;
		sensitivityEar=0.13;
		minIdleStayTime=1;
		maxIdleStayTime=2;
		minRoamRange=50;
		maxRoamRange=80;
		aiAgentTemplate="InfectedMale";
		class Wounds: Wounds
		{
			tex[]={};
			mat[]=
			{
				"dz\characters\zombies\data\jacket.rvmat",
				"dz\characters\zombies\data\jacket_injury.rvmat",
				"dz\characters\zombies\data\jacket_injury.rvmat"
			};
		};
		
		class AttackActions
		{
			class AttackLong
			{
				attackName="attackLong";
				ammoType="MeleeZombieMale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.75;
				distance=1.75;
				time=2.5;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=2.2;
				repeatable=0;
				cooldown=2.75;
			};
			class AttackRun
			{
				attackName="attackRun";
				ammoType="MeleeZombieMale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShort
			{
				attackName="attackShort";
				ammoType="MeleeZombieMale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShortLow
			{
				attackName="attackShortLow";
				ammoType="MeleeZombieMale";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk",
					"run"
				};
				minDistance=0;
				distance=2;
				time=1;
				yawAngle=0;
				pitchAngle=-45;
				attackWidth=2;
				repeatable=1;
				cooldown=1.25;
			};
			class CrawlAttackMove
			{
				attackName="crawlAttackMove";
				ammoType="MeleeZombieMale";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"walk"
				};
				distance=2;
				time=1.5;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
			class CrawlAttackStill
			{
				attackName="crawlAttackStill";
				ammoType="MeleeZombieMale";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"idle"
				};
				distance=2;
				time=1.1;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
		};
	};
	
	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////
	////////////////////////////////////////////////////////////////////////////////////////////////

	class ZmbM_HermitSkinny_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\hermit_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\hermit.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_HermitSkinny_Beige: ZmbM_HermitSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hermit_beige_co.paa"
		};
	};
	class ZmbM_HermitSkinny_Black: ZmbM_HermitSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hermit_black_co.paa"
		};
	};
	class ZmbM_HermitSkinny_Green: ZmbM_HermitSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hermit_green_co.paa"
		};
	};
	class ZmbM_HermitSkinny_Red: ZmbM_HermitSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hermit_red_co.paa"
		};
	};
	class ZmbM_FarmerFat_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\farmer_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\farmer.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_FarmerFat_Beige: ZmbM_FarmerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\farmer_beige_co.paa"
		};
	};
	class ZmbM_FarmerFat_Blue: ZmbM_FarmerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\farmer_blue_co.paa"
		};
	};
	class ZmbM_FarmerFat_Brown: ZmbM_FarmerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\farmer_brown_co.paa"
		};
	};
	class ZmbM_FarmerFat_Green: ZmbM_FarmerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\farmer_green_co.paa"
		};
	};
	class ZmbF_CitizenANormal_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\citizenA_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\citizenA_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_CitizenANormal_Beige: ZmbF_CitizenANormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_normal_f_co.paa"
		};
	};
	class ZmbF_CitizenANormal_Brown: ZmbF_CitizenANormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_normal_f_brown_co.paa"
		};
	};
	class ZmbF_CitizenANormal_Blue: ZmbF_CitizenANormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_normal_f_blue_co.paa"
		};
	};
	class ZmbM_CitizenASkinny_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\citizenA_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\citizenA_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_CitizenASkinny_Blue: ZmbM_CitizenASkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_skinny_m_blue_co.paa"
		};
	};
	class ZmbM_CitizenASkinny_Brown: ZmbM_CitizenASkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_skinny_m_brown_co.paa"
		};
	};
	class ZmbM_CitizenASkinny_Grey: ZmbM_CitizenASkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_skinny_m_grey_co.paa"
		};
	};
	class ZmbM_CitizenASkinny_Red: ZmbM_CitizenASkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenA_skinny_m_red_co.paa"
		};
	};
	class ZmbM_CitizenBFat_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\citizenB_fat_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\citizenB_fat_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_CitizenBFat_Blue: ZmbM_CitizenBFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenB_fat_m_CO.paa"
		};
	};
	class ZmbM_CitizenBFat_Red: ZmbM_CitizenBFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenB_fat_m_red_CO.paa"
		};
	};
	class ZmbM_CitizenBFat_Green: ZmbM_CitizenBFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenB_fat_m_green_CO.paa"
		};
	};
	class ZmbF_CitizenBSkinny_Base: ZombieFemaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30; 
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\citizenB_skinny_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\citizenB_skinny_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_CitizenBSkinny: ZmbF_CitizenBSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\citizenB_skinny_f_CO.paa"
		};
	};
	class ZmbM_PrisonerSkinny_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80; 
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\prisoner_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\prisoner_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_PrisonerSkinny: ZmbM_PrisonerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\prisoner_skinny_m_co.paa"
		};
	};
	class ZmbM_FirefighterNormal_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\firefighter_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\firefighter_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_FirefighterNormal: ZmbM_FirefighterNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\firefighter_normal_m_co.paa"
		};
	};
	class ZmbM_FishermanOld_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\fisherman_old_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\fisherman_old_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_FishermanOld_Blue: ZmbM_FishermanOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\fisherman_old_blue_m_co.paa"
		};
	};
	class ZmbM_FishermanOld_Green: ZmbM_FishermanOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\fisherman_old_green_m_co.paa"
		};
	};
	class ZmbM_FishermanOld_Grey: ZmbM_FishermanOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\fisherman_old_grey_m_co.paa"
		};
	};
	class ZmbM_FishermanOld_Red: ZmbM_FishermanOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\fisherman_old_red_m_co.paa"
		};
	};
	class ZmbM_JournalistSkinny_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\journalist_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\journalist_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_JournalistSkinny: ZmbM_JournalistSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\journalist_skinny_m_co.paa"
		};
	};
	class ZmbF_JournalistNormal_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\journalist_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\journalist_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_JournalistNormal_Blue: ZmbF_JournalistNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\journalist_normal_f_blue_co.paa"
		};
	};
	class ZmbF_JournalistNormal_Green: ZmbF_JournalistNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\journalist_normal_f_green_co.paa"
		};
	};
	class ZmbF_JournalistNormal_Red: ZmbF_JournalistNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\journalist_normal_f_red_co.paa"
		};
	};
	class ZmbF_JournalistNormal_White: ZmbF_JournalistNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\journalist_normal_f_white_co.paa"
		};
	};
	class ZmbM_ParamedicNormal_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\paramedic_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\paramedic_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_ParamedicNormal_Blue: ZmbM_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_m_blue_co.paa"
		};
	};
	class ZmbM_ParamedicNormal_Green: ZmbM_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_m_green_co.paa"
		};
	};
	class ZmbM_ParamedicNormal_Red: ZmbM_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_m_red_co.paa"
		};
	};
	class ZmbM_ParamedicNormal_Black: ZmbM_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_m_black_co.paa"
		};
	};
	class ZmbF_ParamedicNormal_Base: ZombieFemaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80; //50 (3coups)
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\paramedic_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\paramedic_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_ParamedicNormal_Blue: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_f_blue_co.paa"
		};
	};
	class ZmbF_ParamedicNormal_Green: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_f_green_co.paa"
		};
	};
	class ZmbF_ParamedicNormal_Red: ZmbF_ParamedicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\paramedic_normal_f_red_co.paa"
		};
	};
	class ZmbM_HikerSkinny_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\hiker_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\hiker_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_HikerSkinny_Blue: ZmbM_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_m_co.paa"
		};
	};
	class ZmbM_HikerSkinny_Green: ZmbM_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_m_green_co.paa"
		};
	};
	class ZmbM_HikerSkinny_Yellow: ZmbM_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_m_yellow_co.paa"
		};
	};
	class ZmbF_HikerSkinny_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\hiker_skinny_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\hiker_skinny_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_HikerSkinny_Blue: ZmbF_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_f_blue_co.paa"
		};
	};
	class ZmbF_HikerSkinny_Grey: ZmbF_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_f_gray_co.paa"
		};
	};
	class ZmbF_HikerSkinny_Green: ZmbF_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_f_green_co.paa"
		};
	};
	class ZmbF_HikerSkinny_Red: ZmbF_HikerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hiker_skinny_f_red_co.paa"
		};
	};
	class ZmbM_HunterOld_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\Hunter_old_M.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\Hunter_old_M.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_HunterOld_Autumn: ZmbM_HunterOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hunter_old_m_autumn_co.paa"
		};
	};
	class ZmbM_HunterOld_Spring: ZmbM_HunterOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hunter_old_m_spring_co.paa"
		};
	};
	class ZmbM_HunterOld_Summer: ZmbM_HunterOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hunter_old_m_summer_co.paa"
		};
	};
	class ZmbM_HunterOld_Winter: ZmbM_HunterOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\hunter_old_m_winter_co.paa"
		};
	};
	class ZmbF_SurvivorNormal_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\Survivor_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\survivor_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_SurvivorNormal_Blue: ZmbF_SurvivorNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\survivor_normal_f_blue_co.paa"
		};
	};
	class ZmbF_SurvivorNormal_Orange: ZmbF_SurvivorNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\survivor_normal_f_orange_co.paa"
		};
	};
	class ZmbF_SurvivorNormal_Red: ZmbF_SurvivorNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\survivor_normal_f_red_co.paa"
		};
	};
	class ZmbF_SurvivorNormal_White: ZmbF_SurvivorNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\survivor_normal_f_white_co.paa"
		};
	};
	class ZmbM_PolicemanFat_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\Policeman_fat_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\policeman_fat_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_PolicemanFat: ZmbM_PolicemanFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\policeman_fat_m_co.paa"
		};
	};
	class ZmbF_PoliceWomanNormal_Base: ZombieFemaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\policewoman_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\policewoman_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_PoliceWomanNormal: ZmbF_PoliceWomanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\policewoman_normal_f_co.paa"
		};
	};
	class ZmbM_PolicemanSpecForce_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\PolicemanSpecialForce_Normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\PolicemanSpecialForce_Normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_PolicemanSpecForce: ZmbM_PolicemanSpecForce_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\PolicemanSpecialForce_Normal_m_co.paa"
		};
	};
	class ZmbM_SoldierNormal_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\soldier_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier_normal_m.rvmat"
		};
		class AttackActions
		{
			class AttackLong
			{
				attackName="attackLong";
				ammoType="MeleeZombieSoldier";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.75;
				distance=1.75;
				time=2.5;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=2.2;
				repeatable=0;
				cooldown=2.75;
			};
			class AttackRun
			{
				attackName="attackRun";
				ammoType="MeleeZombieSoldier";
				stanceName="erect";
				moveAnimNames[]=
				{
					"run",
					"sprint"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShort
			{
				attackName="attackShort";
				ammoType="MeleeZombieSoldier";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk"
				};
				minDistance=0.5;
				distance=1.3;
				time=1;
				yawAngle=0;
				pitchAngle=0;
				attackWidth=1.5;
				repeatable=1;
				cooldown=1.25;
			};
			class AttackShortLow
			{
				attackName="attackShortLow";
				ammoType="MeleeZombieSoldier";
				stanceName="erect";
				moveAnimNames[]=
				{
					"idle",
					"walk",
					"run"
				};
				minDistance=0;
				distance=2;
				time=1;
				yawAngle=0;
				pitchAngle=-45;
				attackWidth=2;
				repeatable=1;
				cooldown=1.25;
			};
			class CrawlAttackMove
			{
				attackName="crawlAttackMove";
				ammoType="MeleeZombieSoldier";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"walk"
				};
				distance=2;
				time=1.5;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
			class CrawlAttackStill
			{
				attackName="crawlAttackStill";
				ammoType="MeleeZombieSoldier";
				stanceName="crawl";
				moveAnimNames[]=
				{
					"idle"
				};
				distance=2;
				time=1.1;
				yawAngle=0;
				pitchAngle=45;
				attackWidth=2;
				cooldown=1.25;
			};
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_SoldierNormal: ZmbM_SoldierNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_normal_m_co.paa"
		};
	};
	class ZmbM_usSoldier_normal_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\usSoldier_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\usSoldier_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_usSoldier_normal_Woodland: ZmbM_usSoldier_normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\usSoldier_normal_m_MarpatWoodland_CO.paa"
		};
	};
	class ZmbM_usSoldier_normal_Desert: ZmbM_usSoldier_normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\ussoldier_normal_m_marpatdesert_co.paa"
		};
	};
	class ZmbM_CommercialPilotOld_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\commercialPilot_old_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\commercialpilot_old_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_CommercialPilotOld_Blue: ZmbM_CommercialPilotOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\commercialpilot_old_m_co.paa"
		};
	};
	class ZmbM_CommercialPilotOld_Olive: ZmbM_CommercialPilotOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\commercialpilot_old_m_olive_co.paa"
		};
	};
	class ZmbM_CommercialPilotOld_Brown: ZmbM_CommercialPilotOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\commercialpilot_old_m_brown_co.paa"
		};
	};
	class ZmbM_CommercialPilotOld_Grey: ZmbM_CommercialPilotOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\commercialpilot_old_m_grey_co.paa"
		};
	};
	class ZmbM_PatrolNormal_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\Patrol_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\patrol_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_PatrolNormal_PautRev: ZmbM_PatrolNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patrol_normal_m_pautrev_co.paa"
		};
	};
	class ZmbM_PatrolNormal_Autumn: ZmbM_PatrolNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patrol_normal_m_Autumn_co.paa"
		};
	};
	class ZmbM_PatrolNormal_Flat: ZmbM_PatrolNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patrol_normal_m_flat_co.paa"
		};
	};
	class ZmbM_PatrolNormal_Summer: ZmbM_PatrolNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patrol_normal_m_Summer_co.paa"
		};
	};
	class ZmbM_JoggerSkinny_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\jogger_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\jogger_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_JoggerSkinny_Blue: ZmbM_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_m_blue_CO.paa"
		};
	};
	class ZmbM_JoggerSkinny_Green: ZmbM_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_m_green_CO.paa"
		};
	};
	class ZmbM_JoggerSkinny_Red: ZmbM_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_m_red_CO.paa"
		};
	};
	class ZmbF_JoggerSkinny_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\jogger_skinny_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\jogger_skinny_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_JoggerSkinny_Blue: ZmbF_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_f_Blue_CO.paa"
		};
	};
	class ZmbF_JoggerSkinny_Brown: ZmbF_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_f_Brown_CO.paa"
		};
	};
	class ZmbF_JoggerSkinny_Green: ZmbF_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_f_Green_CO.paa"
		};
	};
	class ZmbF_JoggerSkinny_Red: ZmbF_JoggerSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jogger_skinny_f_Red_CO.paa"
		};
	};
	class ZmbM_MotobikerFat_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\motobiker_fat_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\motobiker_fat_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_MotobikerFat_Beige: ZmbM_MotobikerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\motobiker_fat_m_beige_co.paa"
		};
	};
	class ZmbM_MotobikerFat_Black: ZmbM_MotobikerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\motobiker_fat_m_black_co.paa"
		};
	};
	class ZmbM_MotobikerFat_Blue: ZmbM_MotobikerFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\motobiker_fat_m_co.paa"
		};
	};
	class ZmbM_VillagerOld_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\villager_old_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\villager_old_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_VillagerOld_Blue: ZmbM_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_m_blue_CO.paa"
		};
	};
	class ZmbM_VillagerOld_Green: ZmbM_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_m_green_CO.paa"
		};
	};
	class ZmbM_VillagerOld_White: ZmbM_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_m_CO.paa"
		};
	};
	class ZmbM_SkaterYoung_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\skater_young_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\skater_young_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_SkaterYoung_Blue: ZmbM_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_m_blue_CO.paa"
		};
	};
	class ZmbM_SkaterYoung_Brown: ZmbM_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_m_brown_CO.paa"
		};
	};
	class ZmbM_SkaterYoung_Green: ZmbM_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_m_green_CO.paa"
		};
	};
	class ZmbM_SkaterYoung_Grey: ZmbM_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_m_grey_CO.paa"
		};
	};
	class ZmbF_SkaterYoung_Base: ZombieFemaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = 1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\skater_young_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\skater_young_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_SkaterYoung_Brown: ZmbF_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_f_brown_co.paa"
		};
	};
	class ZmbF_SkaterYoung_Striped: ZmbF_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_f_co.paa"
		};
	};
	class ZmbF_SkaterYoung_Violet: ZmbF_SkaterYoung_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\skater_young_f_violet_co.paa"
		};
	};
	class ZmbF_DoctorSkinny_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\doctor_skinny_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\doctor_skinny_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_DoctorSkinny: ZmbF_DoctorSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\doctor_skinny_f_CO.paa"
		};
	};
	class ZmbF_BlueCollarFat_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\blueCollar_fat_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\blueCollar_fat_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_BlueCollarFat_Blue: ZmbF_BlueCollarFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\blueCollar_fat_f_blue_CO.paa"
		};
	};
	class ZmbF_BlueCollarFat_Green: ZmbF_BlueCollarFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\blueCollar_fat_f_green_CO.paa"
		};
	};
	class ZmbF_BlueCollarFat_Red: ZmbF_BlueCollarFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\blueCollar_fat_f_red_CO.paa"
		};
	};
	class ZmbF_BlueCollarFat_White: ZmbF_BlueCollarFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\blueCollar_fat_f_white_CO.paa"
		};
	};
	class ZmbF_MechanicNormal_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\mechanic_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\mechanic_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Sneakers_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_MechanicNormal_Beige: ZmbF_MechanicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_normal_f_beige_CO.paa"
		};
	};
	class ZmbF_MechanicNormal_Green: ZmbF_MechanicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_normal_f_green_CO.paa"
		};
	};
	class ZmbF_MechanicNormal_Grey: ZmbF_MechanicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_normal_f_grey_CO.paa"
		};
	};
	class ZmbF_MechanicNormal_Orange: ZmbF_MechanicNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_normal_f_orange_CO.paa"
		};
	};
	class ZmbM_MechanicSkinny_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\Mechanic_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\mechanic_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_MechanicSkinny_Blue: ZmbM_MechanicSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_skinny_m_Blue_co.paa"
		};
	};
	class ZmbM_MechanicSkinny_Grey: ZmbM_MechanicSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_skinny_m_Grey_co.paa"
		};
	};
	class ZmbM_MechanicSkinny_Green: ZmbM_MechanicSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_skinny_m_Green_co.paa"
		};
	};
	class ZmbM_MechanicSkinny_Red: ZmbM_MechanicSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\mechanic_skinny_m_Red_co.paa"
		};
	};
	class ZmbM_ConstrWorkerNormal_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\constructionWorker_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\constructionWorker_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_ConstrWorkerNormal_Beige: ZmbM_ConstrWorkerNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\constructionworker_normal_m_beige_co.paa"
		};
	};
	class ZmbM_ConstrWorkerNormal_Black: ZmbM_ConstrWorkerNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\constructionworker_normal_m_black_co.paa"
		};
	};
	class ZmbM_ConstrWorkerNormal_Green: ZmbM_ConstrWorkerNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\constructionworker_normal_m_green_co.paa"
		};
	};
	class ZmbM_ConstrWorkerNormal_Grey: ZmbM_ConstrWorkerNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\constructionworker_normal_m_grey_co.paa"
		};
	};
	class ZmbM_HeavyIndustryWorker_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\HeavyIndustryWorker_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\HeavyIndustryWorker_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_HeavyIndustryWorker: ZmbM_HeavyIndustryWorker_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\HeavyIndustryWorker_normal_m_co.paa"
		};
	};
	class ZmbM_OffshoreWorker_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\offshoreWorker_normal_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\offshoreWorker_normal_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_OffshoreWorker_Green: ZmbM_OffshoreWorker_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\offshoreWorker_normal_m_green.paa"
		};
	};
	class ZmbM_OffshoreWorker_Orange: ZmbM_OffshoreWorker_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\offshoreWorker_normal_m_orange.paa"
		};
	};
	class ZmbM_OffshoreWorker_Red: ZmbM_OffshoreWorker_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\offshoreWorker_normal_m_red.paa"
		};
	};
	class ZmbM_OffshoreWorker_Yellow: ZmbM_OffshoreWorker_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\offshoreWorker_normal_m_yellow.paa"
		};
	};
	class ZmbF_NurseFat_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\nurse_fat_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\nurse_fat_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_NurseFat: ZmbF_NurseFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\nurse_fat_f_co.paa"
		};
	};
	class ZmbM_HandymanNormal_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\coveralls.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\coveralls.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_HandymanNormal_Beige: ZmbM_HandymanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\coveralls_beige_co.paa"
		};
	};
	class ZmbM_HandymanNormal_Blue: ZmbM_HandymanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\coveralls_blue_co.paa"
		};
	};
	class ZmbM_HandymanNormal_Green: ZmbM_HandymanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\coveralls_green_co.paa"
		};
	};
	class ZmbM_HandymanNormal_Grey: ZmbM_HandymanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\coveralls_grey_co.paa"
		};
	};
	class ZmbM_HandymanNormal_White: ZmbM_HandymanNormal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\coveralls_white_co.paa"
		};
	};
	class ZmbM_DoctorFat_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 0.5;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 120;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\doctor_fat_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\doctor_fat_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_DoctorFat: ZmbM_DoctorFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\doctor_fat_m_co.paa"
		};
	};
	class ZmbM_Jacket_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\jacket_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\jacket.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_Jacket_beige: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_beige_co.paa"
		};
	};
	class ZmbM_Jacket_black: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_black_co.paa"
		};
	};
	class ZmbM_Jacket_blue: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_blue_co.paa"
		};
	};
	class ZmbM_Jacket_bluechecks: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_bluechecks_co.paa"
		};
	};
	class ZmbM_Jacket_brown: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_brown_co.paa"
		};
	};
	class ZmbM_Jacket_greenchecks: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_greenchecks_co.paa"
		};
	};
	class ZmbM_Jacket_grey: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_grey_co.paa"
		};
	};
	class ZmbM_Jacket_khaki: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_khaki_co.paa"
		};
	};
	class ZmbM_Jacket_magenta: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_magenta_co.paa"
		};
	};
	class ZmbM_Jacket_stripes: ZmbM_Jacket_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\jacket_stripes_co.paa"
		};
	};
	class ZmbF_PatientOld_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\patient_old_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\patient_old_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_PatientOld: ZmbF_PatientOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patient_old_f_CO.paa"
		};
	};
	class ZmbM_PatientSkinny_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = 1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\patient_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\patient_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Bare_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_PatientSkinny: ZmbM_PatientSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\patient_skinny_m_co.paa"
		};
	};
	class ZmbF_ShortSkirt_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\shortskirt_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\shortskirt.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_ShortSkirt_beige: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_beige_co.paa"
		};
	};
	class ZmbF_ShortSkirt_black: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_black_co.paa"
		};
	};
	class ZmbF_ShortSkirt_brown: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_brown_co.paa"
		};
	};
	class ZmbF_ShortSkirt_green: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_green_co.paa"
		};
	};
	class ZmbF_ShortSkirt_grey: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_grey_co.paa"
		};
	};
	class ZmbF_ShortSkirt_checks: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_checks_co.paa"
		};
	};
	class ZmbF_ShortSkirt_red: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_red_co.paa"
		};
	};
	class ZmbF_ShortSkirt_stripes: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_stripes_co.paa"
		};
	};
	class ZmbF_ShortSkirt_white: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_white_co.paa"
		};
	};
	class ZmbF_ShortSkirt_yellow: ZmbF_ShortSkirt_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\shortskirt_yellow_co.paa"
		};
	};
	class ZmbF_VillagerOld_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\villager_old_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\villager_old_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_VillagerOld_Blue: ZmbF_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_f_blue_CO.paa"
		};
	};
	class ZmbF_VillagerOld_Green: ZmbF_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_f_green_CO.paa"
		};
	};
	class ZmbF_VillagerOld_Red: ZmbF_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_f_red_CO.paa"
		};
	};
	class ZmbF_VillagerOld_White: ZmbF_VillagerOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\villager_old_f_white_CO.paa"
		};
	};
	class ZmbM_Soldier: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_SoldierAlice: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100;
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_alice_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
	};
	class ZmbM_SoldierHelmet: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1000; 
						transferToGlobalCoef = 0.1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 120; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 120; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 120; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_helmet_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
	};
	class ZmbM_SoldierVest: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 2;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1; 
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_vest_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
	};
	class ZmbM_SoldierAliceHelmet: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1000; 
						transferToGlobalCoef = 0.1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_helmet_alice_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
	};
	class ZmbM_SoldierVestHelmet: ZmbM_SoldierNormal_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 1000; 
						transferToGlobalCoef = 0.1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 150; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=2;
		model="\DZ\characters\zombies\z_soldier_helmet_vest_above0.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\soldier.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\soldier_co.paa"
		};
	};
	class ZmbF_MilkMaidOld_Base: ZombieFemaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = 1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\milkmaid_old_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\milkmaid_old_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Old_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Old_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Old_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Old_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Old_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Old_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_MilkMaidOld_Beige: ZmbF_MilkMaidOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\milkmaid_old_f_beige_co.paa"
		};
	};
	class ZmbF_MilkMaidOld_Black: ZmbF_MilkMaidOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\milkmaid_old_f_black_co.paa"
		};
	};
	class ZmbF_MilkMaidOld_Green: ZmbF_MilkMaidOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\milkmaid_old_f_green_co.paa"
		};
	};
	class ZmbF_MilkMaidOld_Grey: ZmbF_MilkMaidOld_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\milkmaid_old_f_grey_co.paa"
		};
	};
	class ZmbM_priestPopSkinny_Base: ZombieMaleBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] =
					{

						{
							1,
							{}
						},

						{
							0.69999999,
							{}
						},

						{
							0.5,
							{}
						},

						{
							0.30000001,
							{}
						},

						{
							0,
							{}
						}
					};
				};
			};
			class DamageZones
			{
				class Head
				{
					class Health
					{
						hitpoints = 500; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Head"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Headgear",
						"Mask"
					};
				};
				class Torso
				{
					class Health
					{
						hitpoints = 500; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"Spine1",
						"Spine3"
					};
					fatalInjuryCoef = -1;
					transferToZonesNames[] =
					{
						"Head",
						"LeftArm",
						"RightArm"
					};
					transferToZonesCoefs[] = { 0,0,0 };
					inventorySlots[] =
					{
						"Vest",
						"Body",
						"Back"
					};
				};
				class LeftArm
				{
					class Health
					{
						hitpoints = 500; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftArm",
						"LeftForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class RightArm
				{
					class Health
					{
						hitpoints = 500; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightArm",
						"RightForeArm"
					};
					fatalInjuryCoef = -1;
				};
				class LeftLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"LeftLeg",
						"LeftUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class RightLeg
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					componentNames[] =
					{
						"RightLeg",
						"RightUpLeg"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Legs"
					};
				};
				class LeftFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"LeftLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"LeftFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
				class RightFoot
				{
					class Health
					{
						hitpoints = 100; 
						transferToGlobalCoef = 1;
					};
					transferToZonesNames[] =
					{
						"RightLeg"
					};
					transferToZonesCoefs[] = { 0 };
					componentNames[] =
					{
						"RightFoot"
					};
					fatalInjuryCoef = -1;
					inventorySlots[] =
					{
						"Feet"
					};
				};
			};
		};
		scope=0;
		model="\DZ\characters\zombies\priestPop_skinny_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\priestPop_skinny_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Skinny_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Skinny_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Skinny_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Skinny_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Skinny_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Skinny_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_priestPopSkinny: ZmbM_priestPopSkinny_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\priestPop_skinny_m_co.paa"
		};
	};
	class ZmbM_ClerkFat_Base: ZombieMaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\clerk_fat_m.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\clerk_fat_m.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbM_Fat_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbM_Fat_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbM_Fat_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbM_Fat_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbM_Fat_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbM_Fat_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbM_ClerkFat_Brown: ZmbM_ClerkFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerk_fat_m_brown_CO.paa"
		};
	};
	class ZmbM_ClerkFat_Grey: ZmbM_ClerkFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerk_fat_m_grey_CO.paa"
		};
	};
	class ZmbM_ClerkFat_Khaki: ZmbM_ClerkFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerk_fat_m_khaki_CO.paa"
		};
	};
	class ZmbM_ClerkFat_White: ZmbM_ClerkFat_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerk_fat_m_white_CO.paa"
		};
	};
	class ZmbF_Clerk_Normal_Base: ZombieFemaleBase
	{
		scope=0;
		model="\DZ\characters\zombies\clerkA_normal_f.p3d";
		hiddenSelectionsMaterials[]=
		{
			"dz\characters\zombies\data\clerkA_normal_f.rvmat"
		};
		class AnimEvents
		{
			class Steps
			{
				class Walk1
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=1;
				};
				class Walk2
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=2;
				};
				class Walk3
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=3;
				};
				class Walk4
				{
					soundLookupTable="walkErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=4;
				};
				class Run1
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=5;
				};
				class Run2
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=6;
				};
				class Run3
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=7;
				};
				class Run4
				{
					soundLookupTable="runErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=8;
				};
				class Sprint1
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=9;
				};
				class Sprint2
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=10;
				};
				class Sprint3
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=11;
				};
				class Sprint4
				{
					soundLookupTable="sprintErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=12;
				};
				class Scuff1
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=17;
				};
				class Scuff2
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=18;
				};
				class Sccuff3
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=19;
				};
				class Scuff4
				{
					soundLookupTable="scuffErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=20;
				};
				class landFeetErc
				{
					soundLookupTable="landFeetErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=21;
				};
				class landFootErc
				{
					soundLookupTable="landFootErc_Boots_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=22;
				};
				class Bodyfall
				{
					soundLookupTable="bodyfall_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=23;
				};
				class Bodyfall_Hand
				{
					soundLookupTable="bodyfall_hand_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=24;
				};
				class Bodyfall_Slide
				{
					soundLookupTable="bodyfall_slide_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=25;
				};
				class Prone_Walk_L
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=27;
				};
				class Prone_Walk_R
				{
					soundLookupTable="walkProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=28;
				};
				class Prone_Run_L
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=29;
				};
				class Prone_Run_R
				{
					soundLookupTable="runProne_Zmb_LookupTable";
					noise="ZombieStepNoise";
					id=30;
				};
			};
			class Sounds
			{
				class Attack_Light1
				{
					soundSet="Zmb_Attack_Light1_SoundSet";
					id=1;
				};
				class Attack_Light2
				{
					soundSet="Zmb_Attack_Light2_SoundSet";
					id=2;
				};
				class Attack_Heavy1
				{
					soundSet="Zmb_Attack_Heavy1_SoundSet";
					id=3;
				};
				class Attack_Heavy2
				{
					soundSet="Zmb_Attack_Heavy2_SoundSet";
					id=4;
				};
				class TwoHands
				{
					soundSet="Zmb_Attack_TwoHands_SoundSet";
					id=5;
				};
			};
			class SoundVoice
			{
				class LightHit
				{
					soundSet="ZmbF_Normal_LightHit_Soundset";
					id=1;
				};
				class HeavyHit
				{
					soundSet="ZmbF_Normal_HeavyHit_Soundset";
					id=2;
				};
				class Attack
				{
					soundSet="ZmbF_Normal_Attack_Soundset";
					id=5;
				};
				class Jump
				{
					soundSet="ZmbF_Normal_Jump_Soundset";
					id=10;
				};
				class Land
				{
					soundSet="ZmbF_Normal_Land_Soundset";
					id=11;
				};
				class CallToArmsShort
				{
					soundSet="ZmbF_Normal_CallToArmsShort_Soundset";
					id=20;
				};
			};
		};
	};
	class ZmbF_Clerk_Normal_Blue: ZmbF_Clerk_Normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerkA_normal_f_04_CO.paa"
		};
	};
	class ZmbF_Clerk_Normal_White: ZmbF_Clerk_Normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerkA_normal_f_02_CO.paa"
		};
	};
	class ZmbF_Clerk_Normal_Green: ZmbF_Clerk_Normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerkA_normal_f_03_CO.paa"
		};
	};
	class ZmbF_Clerk_Normal_Red: ZmbF_Clerk_Normal_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\characters\zombies\data\clerkA_normal_f_01_CO.paa"
		};
	};
	
};
class PreloadVehicles
{
	class ZmbM_HermitSkinny_Beige;
	class ZmbF_CitizenANormal_Beige;
};
class CfgNonAIVehicles
{
	class ProxyHands;
	class ProxyAK_47_v58_Proxy: ProxyHands
	{
		model="\dz\Characters\Proxies\ak_47_v58_proxy.p3d";
	};
	class ProxyBack;
	class ProxyBackpack_DZ: ProxyBack
	{
		model="\dz\Characters\Proxies\Backpack_DZ.p3d";
	};
	class ProxyEyewear;
	class ProxyEyewear_DZ: ProxyEyewear
	{
		model="\dz\Characters\Proxies\Eyewear_DZ.p3d";
	};
	class ProxyHeadgear;
	class ProxyHeadgear_DZ: ProxyHeadgear
	{
		model="\dz\Characters\Proxies\Headgear_DZ.p3d";
	};
	class ProxyMask;
	class ProxyMask_DZ: ProxyMask
	{
		model="\dz\Characters\Proxies\Mask_DZ.p3d";
	};
	class ProxyVest;
	class ProxyVest_DZ: ProxyVest
	{
		model="\dz\Characters\Proxies\Vest_DZ.p3d";
	};
	class ProxyMelee;
	class ProxyMelee_DZ: ProxyMelee
	{
		model="\dz\Characters\Proxies\Melee_DZ.p3d";
	};
};
