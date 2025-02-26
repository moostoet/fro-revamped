# 1 "data/maps/Route9/scripts.pory"

# 2 "data/maps/Route9/scripts.pory"
Route9_MapScripts::
# 3 "data/maps/Route9/scripts.pory"
	.byte 0
# 4 "data/maps/Route9/scripts.pory"

# 5 "data/maps/Route9/scripts.pory"
Route9_EventScript_RouteSign::
# 6 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route9/scripts.pory"
	end

Route9_Give_Bulbasaur::
# 11 "data/maps/Route9/scripts.pory"
	lock
# 12 "data/maps/Route9/scripts.pory"
	faceplayer
# 13 "data/maps/Route9/scripts.pory"
	goto_if_set FLAG_RECEIVED_BULBASAUR, Route9_Give_Bulbasaur_2
# 19 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_WantBulbasaur, MSGBOX_YESNO
# 20 "data/maps/Route9/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route9_Give_Bulbasaur_5
# 25 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_HereIsBulbasaur
# 26 "data/maps/Route9/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_BULBASAUR
# 27 "data/maps/Route9/scripts.pory"
	givemon SPECIES_BULBASAUR, 10
# 28 "data/maps/Route9/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route9_Give_Bulbasaur_8
# 30 "data/maps/Route9/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route9_Give_Bulbasaur_9
# 33 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_NoRoomForBulbasaur
Route9_Give_Bulbasaur_4:
# 36 "data/maps/Route9/scripts.pory"
	release
	end

Route9_Give_Bulbasaur_2:
# 14 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_AfterBulbasaur
# 15 "data/maps/Route9/scripts.pory"
	release
	end

Route9_Give_Bulbasaur_5:
# 21 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_DeclinedBulbasaur
# 22 "data/maps/Route9/scripts.pory"
	release
	end

Route9_Give_Bulbasaur_8:
# 29 "data/maps/Route9/scripts.pory"
	goto GiveBulbasaur_Party
	goto Route9_Give_Bulbasaur_4

Route9_Give_Bulbasaur_9:
# 31 "data/maps/Route9/scripts.pory"
	goto GiveBulbasaur_PC
	goto Route9_Give_Bulbasaur_4


GiveBulbasaur_Party::
# 41 "data/maps/Route9/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 42 "data/maps/Route9/scripts.pory"
	message Route9_Text_ReceivedBulbasaur
# 43 "data/maps/Route9/scripts.pory"
	waitmessage
# 44 "data/maps/Route9/scripts.pory"
	waitfanfare
# 46 "data/maps/Route9/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 47 "data/maps/Route9/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 48 "data/maps/Route9/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveBulbasaur_Party_1
# 53 "data/maps/Route9/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 54 "data/maps/Route9/scripts.pory"
	call EventScript_ChangePokemonNickname
# 55 "data/maps/Route9/scripts.pory"
	setflag FLAG_RECEIVED_BULBASAUR
# 56 "data/maps/Route9/scripts.pory"
	release
	end

GiveBulbasaur_Party_1:
# 49 "data/maps/Route9/scripts.pory"
	setflag FLAG_RECEIVED_BULBASAUR
# 50 "data/maps/Route9/scripts.pory"
	release
	end


GiveBulbasaur_PC::
# 62 "data/maps/Route9/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 63 "data/maps/Route9/scripts.pory"
	message Route9_Text_ReceivedBulbasaur
# 64 "data/maps/Route9/scripts.pory"
	waitmessage
# 65 "data/maps/Route9/scripts.pory"
	waitfanfare
# 67 "data/maps/Route9/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BULBASAUR
# 68 "data/maps/Route9/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 69 "data/maps/Route9/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveBulbasaur_PC_1
# 74 "data/maps/Route9/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 75 "data/maps/Route9/scripts.pory"
	call EventScript_TransferredToPC
# 76 "data/maps/Route9/scripts.pory"
	setflag FLAG_RECEIVED_BULBASAUR
# 77 "data/maps/Route9/scripts.pory"
	release
	end

GiveBulbasaur_PC_1:
# 70 "data/maps/Route9/scripts.pory"
	setflag FLAG_RECEIVED_BULBASAUR
# 71 "data/maps/Route9/scripts.pory"
	release
	end


Route9_Text_WantBulbasaur::
# 82 "data/maps/Route9/scripts.pory"
	.string "Hey there, TRAINER!\p"
	.string "I'm training to enter the POKéMON\n"
	.string "LEAGUE, and I've learned that the\l"
	.string "best TRAINERS raise all kinds of\l"
	.string "different POKéMON.\p"
	.string "I have this BULBASAUR that I raised\n"
	.string "from an EGG, but I want to focus on\l"
	.string "training my current team.\p"
	.string "You look like a promising TRAINER.\n"
	.string "Would you like to raise BULBASAUR?$"

Route9_Text_HereIsBulbasaur::
# 95 "data/maps/Route9/scripts.pory"
	.string "That's the spirit! A strong TRAINER\n"
	.string "knows a good opportunity!\p"
	.string "BULBASAUR is perfect for both\n"
	.string "battles and competitions.\p"
	.string "I can tell you'll raise it well!$"

Route9_Text_ReceivedBulbasaur::
# 103 "data/maps/Route9/scripts.pory"
	.string "{PLAYER} received BULBASAUR\n"
	.string "from the COOLTRAINER!$"

Route9_Text_NoRoomForBulbasaur::
# 108 "data/maps/Route9/scripts.pory"
	.string "Oh! A prepared TRAINER always has\n"
	.string "space for new POKéMON!\p"
	.string "Come back after you've made room\n"
	.string "in your party.$"

Route9_Text_DeclinedBulbasaur::
# 115 "data/maps/Route9/scripts.pory"
	.string "Really? That's surprising...\p"
	.string "Well, a TRAINER needs to trust\n"
	.string "their instincts.\p"
	.string "The offer stands if you change\n"
	.string "your mind!$"

Route9_Text_AfterBulbasaur::
# 123 "data/maps/Route9/scripts.pory"
	.string "BULBASAUR's LEECH SEED is perfect\n"
	.string "for wearing down tough opponents!\p"
	.string "I'm sure you'll do great at the\n"
	.string "POKéMON LEAGUE with it!\p"
	.string "Maybe we'll face each other there!$"
