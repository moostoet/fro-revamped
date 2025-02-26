# 1 "data/maps/Route10/scripts.pory"

# 2 "data/maps/Route10/scripts.pory"
Route10_MapScripts::
# 3 "data/maps/Route10/scripts.pory"
	.byte 0
# 4 "data/maps/Route10/scripts.pory"

# 5 "data/maps/Route10/scripts.pory"
Route10_EventScript_Unused::
# 6 "data/maps/Route10/scripts.pory"
	end
# 7 "data/maps/Route10/scripts.pory"

# 8 "data/maps/Route10/scripts.pory"
Route10_EventScript_NorthRockTunnelSign::
# 9 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
# 10 "data/maps/Route10/scripts.pory"
	end
# 11 "data/maps/Route10/scripts.pory"

# 12 "data/maps/Route10/scripts.pory"
Route10_EventScript_SouthRockTunnelSign::
# 13 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
# 14 "data/maps/Route10/scripts.pory"
	end
# 15 "data/maps/Route10/scripts.pory"

# 16 "data/maps/Route10/scripts.pory"
Route10_EventScript_PowerPlantSign::
# 17 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
# 18 "data/maps/Route10/scripts.pory"
	end

Route10_Give_SootheBell::
# 21 "data/maps/Route10/scripts.pory"
	lock
# 22 "data/maps/Route10/scripts.pory"
	faceplayer
# 24 "data/maps/Route10/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, Route10_Give_SootheBell_2
# 30 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_WantSootheBell, MSGBOX_YESNO
# 31 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route10_Give_SootheBell_4
# 36 "data/maps/Route10/scripts.pory"
	checkitemspace ITEM_SOOTHE_BELL
# 37 "data/maps/Route10/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route10_Give_SootheBell_8
# 43 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_HereIsSootheBell
# 44 "data/maps/Route10/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 45 "data/maps/Route10/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 46 "data/maps/Route10/scripts.pory"
	release
	end

Route10_Give_SootheBell_2:
# 25 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_AfterSootheBell
# 26 "data/maps/Route10/scripts.pory"
	release
	end

Route10_Give_SootheBell_4:
# 32 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_DeclinedSootheBell
# 33 "data/maps/Route10/scripts.pory"
	release
	end

Route10_Give_SootheBell_8:
# 38 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_BagIsFull
# 39 "data/maps/Route10/scripts.pory"
	release
	end


Route10_PowerPlant_Block::
# 94 "data/maps/Route10/scripts.pory"
	lock
# 95 "data/maps/Route10/scripts.pory"
	faceplayer
# 96 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_PowerPlantBlocked
# 97 "data/maps/Route10/scripts.pory"
	release
	end


Route10_Text_WantSootheBell::
# 51 "data/maps/Route10/scripts.pory"
	.string "Oh my, what an adorable TRAINER!\p"
	.string "I'm a POKéMON breeder, and I just\n"
	.string "love seeing the bonds between\l"
	.string "TRAINERS and their POKéMON!\p"
	.string "I have this extra SOOTHE BELL that\n"
	.string "helps POKéMON grow friendlier.\p"
	.string "Would you like to have it? It would\n"
	.string "look simply darling on your POKéMON!$"

Route10_Text_HereIsSootheBell::
# 62 "data/maps/Route10/scripts.pory"
	.string "Wonderful! The SOOTHE BELL's gentle\n"
	.string "chiming will help your POKéMON grow\l"
	.string "closer to you when they carry it.\p"
	.string "A happy POKéMON is a strong POKéMON,\n"
	.string "that's what I always say!$"

Route10_Text_BagIsFull::
# 70 "data/maps/Route10/scripts.pory"
	.string "Oh dear, your BAG appears to be\n"
	.string "completely full!\p"
	.string "Please make some room and come back\n"
	.string "for this lovely SOOTHE BELL.$"

Route10_Text_DeclinedSootheBell::
# 77 "data/maps/Route10/scripts.pory"
	.string "Oh? Are you sure?\p"
	.string "Well, if you change your mind about\n"
	.string "making your POKéMON extra happy,\l"
	.string "do come see me again!$"

Route10_Text_AfterSootheBell::
# 84 "data/maps/Route10/scripts.pory"
	.string "Remember, a POKéMON holding the\n"
	.string "SOOTHE BELL will become friendlier\l"
	.string "much more quickly!\p"
	.string "Some POKéMON even evolve when\n"
	.string "they're very friendly with their\l"
	.string "TRAINER. Isn't that precious?$"

Route10_Text_PowerPlantBlocked::
# 101 "data/maps/Route10/scripts.pory"
	.string "I apologize, but the POWER PLANT\n"
	.string "is currently off-limits!\p"
	.string "We're dealing with a major power\n"
	.string "surge that's affecting the whole\l"
	.string "KANTO region's electrical grid.\p"
	.string "Wild ELECTRIC-type POKéMON have\n"
	.string "been drawn to the facility in\l"
	.string "unprecedented numbers.\p"
	.string "It's far too dangerous for any\n"
	.string "TRAINER to enter right now.\p"
	.string "Please come back another time\n"
	.string "when we have the situation under\l"
	.string "control!$"
