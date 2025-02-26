# 1 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_PEWTER_CITY
# 9 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
# 20 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 23 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 24 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 26 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 27 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 28 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 29 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 30 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 31 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 32 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 35 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
# 36 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 37 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 39 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 40 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 41 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 42 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 45 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
# 46 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end

PewterPokemonCenter_Scientist_GiveMudkip::
# 50 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 51 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 52 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_MUDKIP, PewterPokemonCenter_Scientist_GiveMudkip_2
# 58 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterPokemonCenter_Text_WantMudkip, MSGBOX_YESNO
# 59 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PewterPokemonCenter_Scientist_GiveMudkip_4
# 64 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterPokemonCenter_Text_HereIsMudkip
# 65 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MUDKIP
# 66 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_MUDKIP, 10
# 67 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PewterPokemonCenter_Scientist_GiveMudkip_7
# 69 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PewterPokemonCenter_Scientist_GiveMudkip_8
# 72 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterPokemonCenter_Text_NoRoomForMudkip
	return

PewterPokemonCenter_Scientist_GiveMudkip_2:
# 53 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterPokemonCenter_Text_AfterMudkip
# 54 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end

PewterPokemonCenter_Scientist_GiveMudkip_4:
# 60 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterPokemonCenter_Text_DeclinedMudkip
# 61 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end

PewterPokemonCenter_Scientist_GiveMudkip_7:
# 68 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	goto GiveMudkip_Party
	return

PewterPokemonCenter_Scientist_GiveMudkip_8:
# 70 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	goto GiveMudkip_PC
	return


GiveMudkip_Party::
# 78 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 79 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterPokemonCenter_Text_ReceivedMudkip
# 80 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 81 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 83 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 84 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 85 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveMudkip_Party_1
# 90 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 91 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 92 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_MUDKIP
# 93 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end

GiveMudkip_Party_1:
# 86 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_MUDKIP
# 87 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


GiveMudkip_PC::
# 99 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 100 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterPokemonCenter_Text_ReceivedMudkip
# 101 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 102 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 104 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MUDKIP
# 105 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 106 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveMudkip_PC_1
# 111 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 112 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 113 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_MUDKIP
# 114 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end

GiveMudkip_PC_1:
# 107 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_MUDKIP
# 108 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
	end


Text_GiveNickNameToThisMon::
# 119 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Give this POKéMON a nickname?$"

PewterPokemonCenter_Text_WantMudkip::
# 123 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Ah, a young TRAINER!\p"
	.string "I'm conducting research on WATER-type\n"
	.string "POKéMON from different regions.\p"
	.string "This MUDKIP from HOENN has been\n"
	.string "helping with my studies, but...\p"
	.string "I think it would rather go on\n"
	.string "adventures with a TRAINER.\p"
	.string "Would you like to take MUDKIP\n"
	.string "with you?$"

PewterPokemonCenter_Text_HereIsMudkip::
# 135 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Splendid! MUDKIP is a WATER-type\n"
	.string "POKéMON from the HOENN region.\p"
	.string "It's very reliable and friendly.\n"
	.string "You'll make a great team!$"

PewterPokemonCenter_Text_ReceivedMudkip::
# 142 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "{PLAYER} received MUDKIP\n"
	.string "from the SCIENTIST!$"

PewterPokemonCenter_Text_NoRoomForMudkip::
# 147 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Hmm... It seems your party is full.\p"
	.string "Please make room for MUDKIP and\n"
	.string "come see me again.$"

PewterPokemonCenter_Text_DeclinedMudkip::
# 153 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "Oh? That's unfortunate...\p"
	.string "If you reconsider, I'll be here\n"
	.string "continuing my research.$"

PewterPokemonCenter_Text_AfterMudkip::
# 159 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.string "MUDKIP is both tough and cute!\p"
	.string "It's perfect for both battles and\n"
	.string "contests. Take good care of it!$"
