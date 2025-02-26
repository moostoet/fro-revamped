# 1 "data/maps/FuchsiaCity_House2/scripts.pory"

# 2 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_MapScripts::
# 3 "data/maps/FuchsiaCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House2/scripts.pory"

# 5 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EventScript_FishingGurusBrother::
# 6 "data/maps/FuchsiaCity_House2/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, FuchsiaCity_House2_EventScript_AlreadyGotGoodRod
# 9 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_EventScript_GiveGoodRod
# 11 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_OhThatsDisappointing
# 12 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 13 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 14 "data/maps/FuchsiaCity_House2/scripts.pory"

# 15 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EventScript_AlreadyGotGoodRod::
# 16 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HowAreTheFishBiting
# 17 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 18 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 19 "data/maps/FuchsiaCity_House2/scripts.pory"

# 20 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EventScript_GiveGoodRod::
# 21 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_LikeYourStyleTakeThis
# 22 "data/maps/FuchsiaCity_House2/scripts.pory"
	checkitemspace ITEM_GOOD_ROD
# 23 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_House2_EventScript_NoRoomForGoodRod
# 24 "data/maps/FuchsiaCity_House2/scripts.pory"
	giveitem_msg FuchsiaCity_House2_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 25 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_GoodRodCanCatchBetterMons
# 26 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
# 27 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 28 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 29 "data/maps/FuchsiaCity_House2/scripts.pory"

# 30 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EventScript_NoRoomForGoodRod::
# 31 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_YouHaveNoRoomForGift
# 32 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 33 "data/maps/FuchsiaCity_House2/scripts.pory"
	end

Fuchsia_GiveLapras::
# 36 "data/maps/FuchsiaCity_House2/scripts.pory"
	lock
# 37 "data/maps/FuchsiaCity_House2/scripts.pory"
	faceplayer
# 38 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_LAPRAS, Fuchsia_GiveLapras_2
# 44 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_Text_WantLapras, MSGBOX_YESNO
# 45 "data/maps/FuchsiaCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Fuchsia_GiveLapras_5
# 50 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_Text_HereIsLapras
# 51 "data/maps/FuchsiaCity_House2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LAPRAS
# 52 "data/maps/FuchsiaCity_House2/scripts.pory"
	givemon SPECIES_LAPRAS, 40
# 53 "data/maps/FuchsiaCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Fuchsia_GiveLapras_8
# 55 "data/maps/FuchsiaCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Fuchsia_GiveLapras_9
# 58 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_Text_NoRoomForLapras
Fuchsia_GiveLapras_4:
# 61 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end

Fuchsia_GiveLapras_2:
# 39 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_Text_AfterLapras
# 40 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end

Fuchsia_GiveLapras_5:
# 46 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_Text_DeclinedLapras
# 47 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end

Fuchsia_GiveLapras_8:
# 54 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto GiveLapras_Party
	goto Fuchsia_GiveLapras_4

Fuchsia_GiveLapras_9:
# 56 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto GiveLapras_PC
	goto Fuchsia_GiveLapras_4


GiveLapras_Party::
# 66 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 67 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_Text_ReceivedLapras
# 68 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 69 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 71 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 72 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 73 "data/maps/FuchsiaCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveLapras_Party_1
# 78 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 79 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 80 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_LAPRAS
# 81 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end

GiveLapras_Party_1:
# 74 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_LAPRAS
# 75 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


GiveLapras_PC::
# 87 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 88 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_Text_ReceivedLapras
# 89 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 90 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 92 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 93 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNickNameToThisMon, MSGBOX_YESNO
# 94 "data/maps/FuchsiaCity_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GiveLapras_PC_1
# 99 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 100 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_TransferredToPC
# 101 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_LAPRAS
# 102 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end

GiveLapras_PC_1:
# 95 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_LAPRAS
# 96 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
	end


FuchsiaCity_Text_WantLapras::
# 107 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "Ah, young TRAINER! I was just\n"
	.string "visiting the SAFARI ZONE...\p"
	.string "It reminded me of my younger days,\n"
	.string "exploring the seas on my LAPRAS.\p"
	.string "But I'm much too old for such\n"
	.string "adventures now, and LAPRAS...\l"
	.string "Well, it needs more excitement\l"
	.string "than our afternoon pond visits.\p"
	.string "You seem like a capable TRAINER.\n"
	.string "Would you take care of LAPRAS?$"

FuchsiaCity_Text_HereIsLapras::
# 120 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "Splendid! Simply splendid!\p"
	.string "LAPRAS is a gentle soul, but also\n"
	.string "quite powerful in battle.\p"
	.string "It can ferry you across any body\n"
	.string "of water with grace and style.\p"
	.string "Much better than those common\n"
	.string "fishing boats, I must say!$"

FuchsiaCity_Text_ReceivedLapras::
# 130 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "{PLAYER} received LAPRAS\n"
	.string "from the gentleman!$"

FuchsiaCity_Text_NoRoomForLapras::
# 135 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "Oh dear, it seems you have a full\n"
	.string "party at the moment.\p"
	.string "Please do return once you've made\n"
	.string "proper arrangements.$"

FuchsiaCity_Text_DeclinedLapras::
# 142 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "Oh my... How disappointing.\p"
	.string "I suppose LAPRAS and I shall\n"
	.string "continue our quiet retirement.$"

FuchsiaCity_Text_AfterLapras::
# 148 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "Ah, seeing young TRAINERS reminds\n"
	.string "me of my glory days!\p"
	.string "LAPRAS and I once explored every\n"
	.string "corner of KANTO's seas...\p"
	.string "I do hope you'll create such\n"
	.string "wonderful memories together!$"

FuchsiaCity_Text_LaprasCheckup::
# 157 "data/maps/FuchsiaCity_House2/scripts.pory"
	.string "How is LAPRAS doing?\p"
	.string "I trust you're having grand\n"
	.string "adventures together!\p"
	.string "Do stop by the SAFARI ZONE\n"
	.string "sometime. The waters there are\l"
	.string "simply marvelous for swimming!$"
