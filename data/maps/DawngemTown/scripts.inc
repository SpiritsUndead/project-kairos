DawngemTown_MapScripts::
	.byte 0


DawngemTown_EventScript_TownSign::
	msgbox Dawn_TownSign, MSGBOX_SIGN
	return


Research_Papers::
	lockall
	giveitem ITEM_RARE_CANDY
	setflag FLAG_Research_Papers
	removeitem 1
	setvar VAR_WHIMLEAF_INTRO_STATE, 3
	releaseall
	return


Dawn_TownSign::
	.string "Dawngem Town\n"
	.string "“Where brilliance is just on the horizon.”$"
