Hotbrook_Pokecenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Hotbrook_Pokecenter_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Hotbrook_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_HOTBROOK_FLATS
	end


Pokecenter_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


NPC_Healer::
	lock
	faceplayer
	msgbox NPC_Healer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NPC_Healer_1
	msgbox NPC_Healer_Text_2, MSGBOX_NPC
	return

NPC_Healer_1:
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox NPC_Healer_Text_1, MSGBOX_NPC
	waitmessage
	release
	end


NPC_Healer_Text_0:
	.string "Would you like me to heal your party?$"

NPC_Healer_Text_1:
	.string "There you go! Take care!$"

NPC_Healer_Text_2:
	.string "Have a nice day$"
