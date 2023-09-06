Hotbrook_Mart_MapScripts::
	.byte 0


Hotbrook_Mart_Employee::
	lock
	faceplayer
	message Hotbrook_Mart_Employee_Text_0
	waitmessage
	pokemart Hotbrook_Mart
	msgbox Hotbrook_Mart_Employee_Text_1
	release
	end


	.align 2
Hotbrook_Mart:
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_MOOMOO_MILK
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

Hotbrook_Mart_Employee_Text_0:
	.string "whatchu want?$"

Hotbrook_Mart_Employee_Text_1:
	.string "And goooood riddance!$"
