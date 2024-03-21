WhimleafTown_MapScripts::
	.byte 0


WhimleafTown_OnTransition::
	setrespawn HEAL_LOCATION_WHIMLEAF_TOWN
	return


WhimleafTown_EventScript_PlayerHouse::
	lockall
	msgbox WhimleafTown_EventScript_PlayerHouse_Text_0
	releaseall
	return


WhimleafTown_EventScript_RivalHouse::
	lockall
	msgbox WhimleafTown_EventScript_RivalHouse_Text_0
	releaseall
	return


WhimleafTown_EventScript_PokeLab::
	lockall
	msgbox WhimleafTown_EventScript_PokeLab_Text_0
	releaseall
	return


WhimleafTown_EventScript_TownSign::
	msgbox TownSign, MSGBOX_SIGN
	return


WhimleafTown_EventScript_WarningSign::
	msgbox WarningSign, MSGBOX_SIGN
	return


WhimleafTown_EventScript_Mom::
	lockall
	faceplayer
	switch VAR_WHIMLEAF_INTRO_STATE
	case 1, WhimleafTown_EventScript_Mom_2
	case 2, WhimleafTown_EventScript_Mom_3
	case 3, WhimleafTown_EventScript_Mom_4
	case 4, WhimleafTown_EventScript_Mom_5
	case 5, WhimleafTown_EventScript_Mom_5
	playse SE_PIN
	applymovement 1, ForceNameRival
	waitmovement 1
	applymovement OBJ_EVENT_ID_PLAYER, Look_Left
	msgbox MomNamingRival
	special NameRival
	setrespawn HEAL_LOCATION_WHIMLEAF_TOWN
	waitstate
	msgbox MomConfirmRival, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WhimleafTown_EventScript_Mom_8
WhimleafTown_EventScript_Mom_12:
	compare VAR_RESULT, NO
	goto_if_eq WhimleafTown_EventScript_Mom_13
	msgbox MomConfirmRival2
WhimleafTown_EventScript_Mom_7:
	setvar VAR_WHIMLEAF_INTRO_STATE, 1
	msgbox MomPostName
	releaseall
	return

WhimleafTown_EventScript_Mom_2:
	msgbox WhimleafTown_EventScript_Mom_Text_0
	releaseall
	return

WhimleafTown_EventScript_Mom_3:
	msgbox WhimleafTown_EventScript_Mom_Text_1
	releaseall
	return

WhimleafTown_EventScript_Mom_4:
	msgbox WhimleafTown_EventScript_Mom_Text_2
	releaseall
	return

WhimleafTown_EventScript_Mom_5:
	msgbox MomHealPlayer1
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox MomHealPlayer2
	releaseall
	return

WhimleafTown_EventScript_Mom_8:
	msgbox MomConfirmRival2
	goto WhimleafTown_EventScript_Mom_7

WhimleafTown_EventScript_Mom_13:
	special NameRival
	waitstate
	msgbox MomConfirmRival, MSGBOX_YESNO
	goto WhimleafTown_EventScript_Mom_12


WhimleafTown_EventScript_Youngster::
	lockall
	faceplayer
	msgbox WhimleafTown_EventScript_Youngster_Text_0
	msgbox WhimleafTown_EventScript_Youngster_Text_1
	releaseall
	return


WhimleafTown_EventScript_Fatman::
	lockall
	faceplayer
	msgbox WhimleafTown_EventScript_Fatman_Text_0
	msgbox WhimleafTown_EventScript_Fatman_Text_1
	releaseall
	return


WhimleafTown_EventScript_LittleGirl::
	lockall
	faceplayer
	msgbox WhimleafTown_EventScript_LittleGirl_Text_0
	releaseall
	return


WhimleafTown_EventScript_LittleBoy::
	lockall
	faceplayer
	msgbox WhimleafTown_EventScript_LittleBoy_Text_0
	msgbox WhimleafTown_EventScript_LittleBoy_Text_1
	releaseall
	return


ForceNameRival:
	emote_exclamation_mark
	delay_16
	delay_16
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Look_Left:
	walk_in_place_faster_left
	step_end

WhimleafTown_EventScript_PlayerHouse_Text_0:
	.string "It's my house.$"

WhimleafTown_EventScript_RivalHouse_Text_0:
	.string "Its {RIVAL}'s House.$"

WhimleafTown_EventScript_PokeLab_Text_0:
	.string "Whimleaf Pokemon Lab$"

WhimleafTown_EventScript_Mom_Text_0:
	.string "whim intro satate is set to 1.$"

WhimleafTown_EventScript_Mom_Text_1:
	.string "whim intro state is set to 2.$"

WhimleafTown_EventScript_Mom_Text_2:
	.string "whim intro state is set to 3.$"

WhimleafTown_EventScript_Youngster_Text_0:
	.string "Hey there, you want a pokemon?$"

WhimleafTown_EventScript_Youngster_Text_1:
	.string "That's pretty neat, huh?$"

WhimleafTown_EventScript_Fatman_Text_0:
	.string "It's hard for me to walk sometimes.$"

WhimleafTown_EventScript_Fatman_Text_1:
	.string "I dont wanna talk about it.$"

WhimleafTown_EventScript_LittleGirl_Text_0:
	.string "i have a butthole.$"

WhimleafTown_EventScript_LittleBoy_Text_0:
	.string "did she tell you she has a butthole?\l$"

WhimleafTown_EventScript_LittleBoy_Text_1:
	.string "What a weirdo!$"

TownSign::
	.string "Whimleaf Town\n"
	.string "“Home of endless possibilities!”$"

WarningSign::
	.string "Route 1 {RIGHT_ARROW} \n"
	.string "{COLOR RED}{SHADOW LIGHT_RED}Danger: Wild pokemon!$"

MomNamingRival::
	.string "Hey, {PLAYER}, we have some new neighbors!\n"
	.string "I think they have a kid\l"
	.string "that's around your age.\p "
	.string "Did you catch their name?$"

MomHealPlayer1::
	.string "Hey there, {PLAYER}! Welcome home!\l"
	.string "You look tired...\p"
	.string "Why don't you take a quick rest?$"

MomHealPlayer2::
	.string "Ok, you and your pokemon are good\n"
	.string "to go!\p"
	.string "Take care, {PLAYER},\n"
	.string "and be careful out there!$"

MomConfirmRival::
	.string "Oh, so their name is {RIVAL}, huh?$"

MomConfirmRival2::
	.string "Oh, yes, of course their\n"
	.string "name is {RIVAL}...\p"
	.string "How silly of me to\n"
	.string "have forgotten!$"

MomPostName::
	.string "go get a paccman\n"
	.string "or a pokemon whatever$"
