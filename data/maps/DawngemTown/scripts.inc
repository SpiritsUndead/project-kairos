DawngemTown_MapScripts::
	.byte 0


DawngemTown_EventScript_TownSign::
	msgbox Dawn_TownSign, MSGBOX_SIGN
	return


Research_Papers::
	lockall
	finditem ITEM_RARE_CANDY
	setvar VAR_WHIMLEAF_INTRO_STATE, 3
	releaseall
	return


Dawn_TownSign::
	.string "Dawngem Town\n"
	.string "“Where brilliance is just on the horizon.”$"
