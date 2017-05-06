// Configuration file for RSO buildings, objects and etc

#include "BIS_AddonInfo.hpp"
#include "basicdefines_A3.hpp"
#include "cfgPatches.hpp"
#include "cfgFunctions.hpp"

class cfgVehicleClasses
{
	class RSO_Models
	{
		displayName = "RSO";
	};
};
class CfgEditorCategories
{
	class RSOModels
	{
		displayName = "RSO Models";
	};
};
class CfgEditorSubcategories
{
	class RSOBuildings
	{
		displayName = "RSO Buildings";
	};
};

class CfgDestroy
{
	class BuildingHit
	{
		sound[] = {};
	};
};
class CfgVehicles
{
	class House;         // declare  House from ArmA 3
	class House_F: House // declare and define House_F, and make it inheret House
	{
		class DestructionEffects;
	};

	class Ruins_F;
	class land_rso_apartmentcomplex: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_apartmentcomplex.p3d";
		displayName = "Apartment Complex";
		displayNameShort = "AprtCmplx";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_5_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_6_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_7_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_8_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_9_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_10_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_11_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);                                             // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_5: OpenDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') < 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_5: CloseDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') >= 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_6: OpenDoor_1
			{
				position = Door_6_trigger;
				condition = ((this animationPhase 'Door_6_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_6_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_6: CloseDoor_1
			{
				position = Door_6_trigger;
				condition = ((this animationPhase 'Door_6_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_6_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_7: OpenDoor_1
			{
				position = Door_7_trigger;
				condition = ((this animationPhase 'Door_7_rot') < 0.5);
				statement = ([this, 'Door_7_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_7: CloseDoor_1
			{
				position = Door_7_trigger;
				condition = ((this animationPhase 'Door_7_rot') >= 0.5);
				statement = ([this, 'Door_7_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_8: OpenDoor_1
			{
				position = Door_8_trigger;
				condition = ((this animationPhase 'Door_8_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_8_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_8: CloseDoor_1
			{
				position = Door_8_trigger;
				condition = ((this animationPhase 'Door_8_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_8_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_9: OpenDoor_1
			{
				position = Door_9_trigger;
				condition = ((this animationPhase 'Door_9_rot') < 0.5);
				statement = ([this, 'Door_9_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_9: CloseDoor_1
			{
				position = Door_9_trigger;
				condition = ((this animationPhase 'Door_9_rot') >= 0.5);
				statement = ([this, 'Door_9_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_10: OpenDoor_1
			{
				position = Door_10_trigger;
				condition = ((this animationPhase 'Door_10_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_10_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_10: CloseDoor_1
			{
				position = Door_10_trigger;
				condition = ((this animationPhase 'Door_10_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_10_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_11: OpenDoor_1
			{
				position = Door_11_trigger;
				condition = ((this animationPhase 'Door_11_rot') < 0.5);
				statement = ([this, 'Door_11_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_11: CloseDoor_1
			{
				position = Door_11_trigger;
				condition = ((this animationPhase 'Door_11_rot') >= 0.5);
				statement = ([this, 'Door_11_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		actionBegin5 = OpenDoor_5;
		actionEnd5 = OpenDoor_5;
		actionBegin6 = OpenDoor_6;
		actionEnd6 = OpenDoor_6;
		actionBegin7 = OpenDoor_7;
		actionEnd7 = OpenDoor_7;
		actionBegin8 = OpenDoor_8;
		actionEnd8 = OpenDoor_8;
		actionBegin9 = OpenDoor_9;
		actionEnd9 = OpenDoor_9;
		actionBegin10 = OpenDoor_10;
		actionEnd10 = OpenDoor_10;
		actionBegin11 = OpenDoor11;
		actionEnd11 = OpenDoor_11;
		numberOfDoors = 11;
	};
	class land_rso_apartmentcomplex_wip: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_apartmentcomplex_wip.p3d";
		displayName = "Apartment Complex WIP";
		displayNameShort = "AprtCmplxWIP";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_apartmentcomplex4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_apartmentcomplex4.p3d";
		displayName = "Apartment Complex4";
		displayNameShort = "AprtCmplx4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_apartmentcomplex5: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_apartmentcomplex5.p3d";
		displayName = "Apartment Complex5";
		displayNameShort = "AprtCmplx5";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_arch: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_arch.p3d";
		displayName = "Arch";
		displayNameShort = "Arch";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_rso_arches: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_arches.p3d";
		displayName = "Arches";
		displayNameShort = "Arches";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_ATC1 : House_F
    {
        scope = 2;
        cost = 40;
        vehicleClass = RSO_Models;
        editorCategory = RSOModels;
        editorSubCategory = RSOBuildings;
        model = "rso\rso_ATC1.p3d";
        displayName = "ATC1";
        displayNameShort = "ATC1";
        class DestructionEffects: DestructionEffects
        {
            class Ruin1
            {
                simulation = "ruin";
                type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door"; // Label of the action used in the action menu itself.
				position = Door_1_trigger; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 1.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		numberOfDoors = 4;
    };
	class land_rso_big: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_big.p3d";
		displayName = "big";
		displayNameShort = "big";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	    class land_rso_big_b : House_F
    {
        scope = 2;
        cost = 40;
        vehicleClass = RSO_Models;
        editorCategory = RSOModels;
        editorSubCategory = RSOBuildings;
        model = "rso\rso_big_b.p3d";
        displayName = "big_b";
        displayNameShort = "Big_b";
        class DestructionEffects: DestructionEffects
        {
            class Ruin1
            {
                simulation = "ruin";
                type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
                position = "";
                intensity = 1;
                interval = 1;
                lifeTime = 1;
            };
        };
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door"; // Label of the action used in the action menu itself.
				position = Door_1_trigger; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 1.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		numberOfDoors = 2;
    };
	class land_rso_big_c: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_big_c.p3d";
		displayName = "big_c";
		displayNameShort = "big_c";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_big_d: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_big_d.p3d";
		displayName = "big_d";
		displayNameShort = "big_d";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_big_e: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_big_e.p3d";
		displayName = "big_e";
		displayNameShort = "big_e";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_5_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);                                             // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_5: OpenDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') < 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_5: CloseDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') >= 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		// Here are references binding specific positions in Path lod in p3d to specific actions from "class UserActions" for AI to know when to use which doors. The actionBegin# and ActionEnd# is a hardcoded naming system.
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		actionBegin5 = OpenDoor_5;
		numberOfDoors = 5;
	};
	class land_rso_big_f: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_big_f.p3d";
		displayName = "big_f";
		displayNameShort = "big_f";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
				class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door"; // Label of the action used in the action menu itself.
				position = Door_1_trigger; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 1.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		numberOfDoors = 2;
	};
	class land_rso_block1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_block1.p3d";
		displayName = "Block 1";
		displayNameShort = "Block1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex1.p3d";
		displayName = "Complex 1";
		displayNameShort = "Cmplx 1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex2.p3d";
		displayName = "Complex 2";
		displayNameShort = "Cmplx2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex3.p3d";
		displayName = "Complex 3";
		displayNameShort = "Cmplx3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex4.p3d";
		displayName = "Complex 4";
		displayNameShort = "Cmplx4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex5: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex5.p3d";
		displayName = "Complex 5";
		displayNameShort = "Cmplx5";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex6: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex6.p3d";
		displayName = "Complex 6";
		displayNameShort = "Cmplx6";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex7: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex7.p3d";
		displayName = "Complex 7";
		displayNameShort = "Cmplx7";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex8: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex8.p3d";
		displayName = "Complex 8";
		displayNameShort = "Cmplx8";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_complex9: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_complex9.p3d";
		displayName = "Complex 9";
		displayNameShort = "Cmplx9";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_construct1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_construct1.p3d";
		displayName = "Construct 1";
		displayNameShort = "Construct1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_construct2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_construct2.p3d";
		displayName = "Construct 2";
		displayNameShort = "Construct2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_construct3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_construct3.p3d";
		displayName = "Construct 3";
		displayNameShort = "Construct3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_construct4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_construct4.p3d";
		displayName = "Construct 4";
		displayNameShort = "Construct4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_corner1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_corner1.p3d";
		displayName = "Corner 1";
		displayNameShort = "Corner1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_corner2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_corner2.p3d";
		displayName = "Corner 2";
		displayNameShort = "Corner2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_5_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);                                             // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		numberOfDoors =4;
	};
	class land_rso_cornershop1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_cornershop1.p3d";
		displayName = "Cornershop";
		displayNameShort = "Cornershop";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_5_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);                                             // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		numberOfDoors =4;
	};
	class land_rso_garage1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_garage1.p3d";
		displayName = "Garage 1";
		displayNameShort = "Garage1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_garages: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_garages.p3d";
		displayName = "Garages";
		displayNameShort = "Garages";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h1.p3d";
		displayName = "h 1";
		displayNameShort = "h1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				// This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				// Label of the action used in the action menu itself.
				displayName = "Open Door";
				// Point in Memory lod in p3d around which the action is available.
				position = Door_1_trigger;
				// Priority coefficient used for sorting action in the action menu.
				priority = 0.4;
				// Range around the above defined point in which you need to be to access the action.
				radius = 1.5;
				// Defines if the action is available only to players or AI as well.
				onlyForPlayer = false;
				// Condition for showing the action in action menu.
				//In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				// Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				// Checks if the door is currently open and not destroyed.
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
	};
	class land_rso_h2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h2.p3d";
		displayName = "h 2";
		displayNameShort = "h2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				// This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				// Label of the action used in the action menu itself.
				displayName = "Open Door";
				// Point in Memory lod in p3d around which the action is available.
				position = Door_1_trigger;
				// Priority coefficient used for sorting action in the action menu.
				priority = 0.4;
				// Range around the above defined point in which you need to be to access the action.
				radius = 1.5;
				// Defines if the action is available only to players or AI as well.
				onlyForPlayer = false;
				// Condition for showing the action in action menu.
				//In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				// Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				// Checks if the door is currently open and not destroyed.
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
	};
	class land_rso_h3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h3.p3d";
		displayName = "h 3";
		displayNameShort = "h3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				// This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				// Label of the action used in the action menu itself.
				displayName = "Open Door";
				// Point in Memory lod in p3d around which the action is available.
				position = Door_1_trigger;
				// Priority coefficient used for sorting action in the action menu.
				priority = 0.4;
				// Range around the above defined point in which you need to be to access the action.
				radius = 1.5;
				// Defines if the action is available only to players or AI as well.
				onlyForPlayer = false;
				// Condition for showing the action in action menu.
				//In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				// Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				// Checks if the door is currently open and not destroyed.
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
	};
	class land_rso_h4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h4.p3d";
		displayName = "h 4";
		displayNameShort = "h4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h5: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h5.p3d";
		displayName = "h 5";
		displayNameShort = "h5";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h6: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h6.p3d";
		displayName = "h 6";
		displayNameShort = "h6";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
			class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				// This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
				// Label of the action used in the action menu itself.
				displayName = "Open Door";
				// Point in Memory lod in p3d around which the action is available.
				position = Door_1_trigger;
				// Priority coefficient used for sorting action in the action menu.
				priority = 0.4;
				// Range around the above defined point in which you need to be to access the action.
				radius = 1.5;
				// Defines if the action is available only to players or AI as well.
				onlyForPlayer = false;
				// Condition for showing the action in action menu.
				//In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				// Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				// Checks if the door is currently open and not destroyed.
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
	};
	class land_rso_h7: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h7.p3d";
		displayName = "h 7";
		displayNameShort = "h7";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
			class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user; // "user" = custom source = not controlled by some engine value
				initPhase = 0; // Initial value of animations based on this source
				animPeriod = 1; // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />"; // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door"; // Label of the action used in the action menu itself.
				position = Door_1_trigger; // Point in Memory lod in p3d around which the action is available.
				priority = 0.4; // Priority coefficient used for sorting action in the action menu.
				radius = 1.5; // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false; // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen); // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		numberOfDoors = 2;
  	};
	class land_rso_h8: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h8.p3d";
		displayName = "h 8";
		displayNameShort = "h8";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h9: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h9.p3d";
		displayName = "h 9";
		displayNameShort = "h9";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h10: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h10.p3d";
		displayName = "h 10";
		displayNameShort = "h10";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h11: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h11.p3d";
		displayName = "h 11";
		displayNameShort = "h11";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h11_b: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h11_b.p3d";
		displayName = "h 11b";
		displayNameShort = "h11b";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h12: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h12.p3d";
		displayName = "h 12";
		displayNameShort = "h12";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h13: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h13.p3d";
		displayName = "h 13";
		displayNameShort = "h13";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h14: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h14.p3d";
		displayName = "h 14";
		displayNameShort = "h14";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h15: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h15.p3d";
		displayName = "h 15";
		displayNameShort = "h15";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h16: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h16.p3d";
		displayName = "h 16";
		displayNameShort = "h16";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h17: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h17.p3d";
		displayName = "h 17";
		displayNameShort = "h17";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h18: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h18.p3d";
		displayName = "h 18";
		displayNameShort = "h18";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h19: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h19.p3d";
		displayName = "h 19";
		displayNameShort = "h19";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_h20: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h20.p3d";
		displayName = "h 20";
		displayNameShort = "h20";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_2_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_3_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_4_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_5_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_6_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
			class Door_7_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = "call babe_anms_fnc_playkick; ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen)";                                            // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};

			class OpenDoor_2: OpenDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_2: CloseDoor_1
			{
				position = Door_2_trigger;
				condition = ((this animationPhase 'Door_2_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_2_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_3: OpenDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') < 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_3: CloseDoor_1
			{
				position = Door_3_trigger;
				condition = ((this animationPhase 'Door_3_rot') >= 0.5);
				statement = ([this, 'Door_3_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_4: OpenDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_4: CloseDoor_1
			{
				position = Door_4_trigger;
				condition = ((this animationPhase 'Door_4_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_4_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_5: OpenDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') < 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_5: CloseDoor_1
			{
				position = Door_5_trigger;
				condition = ((this animationPhase 'Door_5_rot') >= 0.5);
				statement = ([this, 'Door_5_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
			class OpenDoor_6: OpenDoor_1
			{
				position = Door_6_trigger;
				condition = ((this animationPhase 'Door_6_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_6_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_6: CloseDoor_1
			{
				position = Door_6_trigger;
				condition = ((this animationPhase 'Door_6_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999);
				statement = ([this, 'Door_6_rot', 'Door_Handle_2_rot_1', 'Door_Handle_2_rot_2'] call BIS_fnc_DoorClose);
			};

			class OpenDoor_7: OpenDoor_1
			{
				position = Door_7_trigger;
				condition = ((this animationPhase 'Door_7_rot') < 0.5);
				statement = ([this, 'Door_7_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorOpen);
			};
			class CloseDoor_7: CloseDoor_1
			{
				position = Door_7_trigger;
				condition = ((this animationPhase 'Door_7_rot') >= 0.5);
				statement = ([this, 'Door_7_rot', 'Door_Handle_3_rot_1', 'Door_Handle_3_rot_2'] call BIS_fnc_DoorClose);
			};
		};
		// Here are references binding specific positions in Path lod in p3d to specific actions from "class UserActions" for AI to know when to use which doors. The actionBegin# and ActionEnd# is a hardcoded naming system.
		actionBegin1 = OpenDoor_1;
		actionEnd1 = OpenDoor_1;
		actionBegin2 = OpenDoor_2;
		actionEnd2 = OpenDoor_2;
		actionBegin3 = OpenDoor_3;
		actionEnd3 = OpenDoor_3;
		actionBegin4 = OpenDoor_4;
		actionEnd4 = OpenDoor_4;
		actionBegin5 = OpenDoor_5;
		actionEnd5 = OpenDoor_5;
		actionBegin6 = OpenDoor_6;
		actionEnd6 = OpenDoor_6;
		actionBegin7 = OpenDoor_7;
		actionEnd = OpenDoor_7;
		// Amount of doors of this house; a parameter for easy processing of all doors on different houses by scripts.
		numberOfDoors = 7;
	};
	class land_rso_h21: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_h21.p3d";
		displayName = "h 21";
		displayNameShort = "h21";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_house_big1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_house_big1.p3d";
		displayName = "house_big1";
		displayNameShort = "house_big1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_hut_invert1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_hut_invert1.p3d";
		displayName = "hut_invert1";
		displayNameShort = "hut_invert1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_hut1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_hut1.p3d";
		displayName = "hut1";
		displayNameShort = "hut1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class AnimationSources
		{
			// Animation sources for doors
			class Door_1_source
			{
				source = user;               // "user" = custom source = not controlled by some engine value
				initPhase = 0;               // Initial value of animations based on this source
				animPeriod = 1;              // Coefficient for duration of change of this animation
				sound = "GenericDoorsSound"; /// Selects sound class from CfgAnimationSourceSounds that is going to be used for sounds of doors
			};
		};
		class UserActions
		{
			class OpenDoor_1
			{
				displayNameDefault = "<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";            // This is displayed in the center of the screen just below crosshair. In this case it's an icon, not a text.
				displayName = "Open Door";                                                                                    // Label of the action used in the action menu itself.
				position = Door_1_trigger;                                                                                    // Point in Memory lod in p3d around which the action is available.
				priority = 0.4;                                                                                               // Priority coefficient used for sorting action in the action menu.
				radius = 1.5;                                                                                                 // Range around the above defined point in which you need to be to access the action.
				onlyForPlayer = false;                                                                                        // Defines if the action is available only to players or AI as well.
				condition = ((this animationPhase 'Door_1_rot') < 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Condition for showing the action in action menu. In this case it checks if the door is closed and if the part of the house in which the door is located hasn't been destroyed yet).
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleOpen);                                             // Action taken when this action is selected in the action menu. In this case it calls a function that opens the door.
			};
			class CloseDoor_1: OpenDoor_1
			{
				displayName = "Close Door";
				priority = 0.2;
				condition = ((this animationPhase 'Door_1_rot') >= 0.5) && ((this animationPhase 'Hitzone_2_hide') < 0.99999); // Checks if the door is currently open and not destroyed.
				statement = ([this, 'Door_1_rot'] call BIS_fnc_DoorNoHandleClose);
			};
		};
	};
	class land_rso_hut2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_hut2.p3d";
		displayName = "hut2";
		displayNameShort = "hut2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_hut3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_hut3.p3d";
		displayName = "hut3";
		displayNameShort = "hut3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_hut4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_hut4.p3d";
		displayName = "hut4";
		displayNameShort = "hut4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_long1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_long1.p3d";
		displayName = "long1";
		displayNameShort = "long1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_mosque1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_mosque1.p3d";
		displayName = "Mosque 1";
		displayNameShort = "mosque1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_parkinghouse: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_parkinghouse.p3d";
		displayName = "Parking House";
		displayNameShort = "parkingHouse";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_pharmacy: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_pharmacy.p3d";
		displayName = "Pharmacy";
		displayNameShort = "Pharmacy";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_radiomast: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_radiomast.p3d";
		displayName = "radiomast";
		displayNameShort = "radiomast";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shack: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shack.p3d";
		displayName = "shack";
		displayNameShort = "shack";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shop1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shop1.p3d";
		displayName = "shop 1";
		displayNameShort = "shop1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shop2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shop2.p3d";
		displayName = "shop 2";
		displayNameShort = "shop2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shop3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shop3.p3d";
		displayName = "shop 3";
		displayNameShort = "shop3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shop3b: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shop3b.p3d";
		displayName = "shop 3b";
		displayNameShort = "shop3b";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shop4: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shop4.p3d";
		displayName = "shop 4";
		displayNameShort = "shop4";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_shrine: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_shrine.p3d";
		displayName = "shrine";
		displayNameShort = "shrine";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_store1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_store1.p3d";
		displayName = "store 1";
		displayNameShort = "store1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_stores: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_stores.p3d";
		displayName = "stores";
		displayNameShort = "stores";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_stores2: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_stores2.p3d";
		displayName = "stores 2";
		displayNameShort = "stores2";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_stores3: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_stores3.p3d";
		displayName = "stores 3";
		displayNameShort = "stores3";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_vcp1: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_vcp1.p3d";
		displayName = "Vehicle Checkpoint 1";
		displayNameShort = "vcp1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_watertower: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_watertower.p3d";
		displayName = "watertower";
		displayNameShort = "watertower";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class land_rso_lighthouse: House_F
	{
		scope = 2;
		cost = 40;
		vehicleClass = RSO_Models;
		editorCategory = RSOModels;
		editorSubCategory = RSOBuildings;
		model = "rso\rso_buildings\rso_lighthouse.p3d";
		displayName = "lighthouse";
		displayNameShort = "lighthouse";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\a3\structures_f\households\house_small01\House_Small_01_V1_ruins_F";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
};
