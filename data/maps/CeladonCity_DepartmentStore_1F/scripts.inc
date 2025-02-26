# 1 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"

# 2 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
CeladonCity_DepartmentStore_1F_MapScripts::
# 3 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"

# 5 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
CeladonCity_DepartmentStore_1F_EventScript_Receptionist::
# 6 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_WelcomeToDeptStore, MSGBOX_NPC
# 7 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	end
# 8 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"

# 9 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
CeladonCity_DepartmentStore_1F_EventScript_LayoutSign::
# 10 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_FloorDescriptions, MSGBOX_SIGN
# 11 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	end
# 12 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"

# 13 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
CeladonCity_DepartmentStore_1F_EventScript_FloorSign::
# 14 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_DepartmentStore_1F_Text_ServiceCounter, MSGBOX_SIGN
# 15 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	end

Celadon_SellTMs_Cheap::
# 18 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	lock
# 19 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 21 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_Text_RocketTMSeller, MSGBOX_YESNO
# 22 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Celadon_SellTMs_Cheap_1
# 33 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_Text_NoThanks
# 34 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	release
	end

Celadon_SellTMs_Cheap_1:
# 23 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_ROCKET_SHOP
# 24 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	message CeladonCity_Text_WhichTMWant
# 25 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	waitmessage
# 27 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	pokemart GruntItems
# 28 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox CeladonCity_Text_AfterBuying
# 29 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	clearflag FLAG_ROCKET_SHOP
# 30 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	release
	end


	.align 2
# 39 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
GruntItems:
# 40 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.2byte ITEM_TM13
# 41 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.2byte ITEM_TM23
# 42 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.2byte ITEM_TM24
# 43 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.2byte ITEM_TM30
# 44 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.2byte ITEM_TM35
	.2byte ITEM_NONE

Celadon_GiveThiefItems::
# 90 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	lock
# 91 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	faceplayer
# 92 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ITEMS_CELADON, Celadon_GiveThiefItems_2
# 97 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeliverymanIntro, MSGBOX_YESNO
# 98 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Celadon_GiveThiefItems_5
# 107 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeclinedItems
# 108 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	release
	end

Celadon_GiveThiefItems_2:
# 93 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox PokemonCenter_Text_AlreadyGotItems
# 94 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	release
	end

Celadon_GiveThiefItems_4:
# 111 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	msgbox PokemonCenter_Text_AfterDelivery
# 112 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	release
	end

Celadon_GiveThiefItems_5:
# 99 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	setflag FLAG_RECEIVED_ITEMS_CELADON
# 100 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_ASPEAR_BERRY, 99
# 101 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_METAL_COAT, 99
# 102 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 99
# 103 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 99
# 104 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_SHARP_BEAK, 99
# 105 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	giveitem ITEM_SILVER_POWDER, 99
	goto Celadon_GiveThiefItems_4


CeladonCity_Text_RocketTMSeller::
# 47 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "Psst! Hey kid, over here...\p"
	.string "Look, I swiped these TMs from the\n"
	.string "GAME CORNER's prize exchange.\p"
	.string "But the boss would kill me if he\n"
	.string "found out I took 'em!\p"
	.string "I'll sell them to you cheap.\n"
	.string "Way better than grinding coins!\p"
	.string "What do you say? Interested?$"

CeladonCity_Text_WhichTMWant::
# 58 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "Which TM you want?\n"
	.string "All top quality, I promise!$"

CeladonCity_Text_NotEnoughMoney::
# 63 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "Hey, what gives? You're short!\p"
	.string "Come back when you've got the cash.\n"
	.string "I can't go any lower than that!$"

CeladonCity_Text_ComeAgain::
# 69 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "Sweet! Here's your TM.\n"
	.string "Don't tell anyone where you got it!\p"
	.string "Come back if you want the others.\n"
	.string "I'll be here... probably.$"

CeladonCity_Text_NoThanks::
# 76 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "Tch... your loss, kid.\p"
	.string "But keep quiet about this, got it?\n"
	.string "I was never here!$"

CeladonCity_Text_AfterBuying::
# 82 "data/maps/CeladonCity_DepartmentStore_1F/scripts.pory"
	.string "These TMs are the real deal!\n"
	.string "Straight from the GAME CORNER!\p"
	.string "Need another? I've still got\n"
	.string "plenty... for the right price!$"
