WhimleafTown_MapScripts::
	.byte 0


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


WhimleafTown_EventScript_PlayerHouse_Text_0:
	.string "It's my house.$"

WhimleafTown_EventScript_RivalHouse_Text_0:
	.string "Its {RIVAL}'s House.$"

WhimleafTown_EventScript_PokeLab_Text_0:
	.string "Whimleaf Pokemon Lab$"

WhimleafTown_EventScript_Youngster_Text_0:
	.string "Hey there, you have a pokemon?$"

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
