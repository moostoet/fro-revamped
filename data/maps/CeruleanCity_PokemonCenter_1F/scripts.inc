# 1 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_CERULEAN_CITY
# 9 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 19 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
# 20 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 23 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
# 24 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 28 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 29 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 30 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 31 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
# 32 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 35 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
# 36 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end

Cerulean_EventScript_ThiefItems::
# 39 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 40 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 41 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ITEMS_CERULEAN, Cerulean_EventScript_ThiefItems_2
# 46 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeliverymanIntro, MSGBOX_YESNO
# 47 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Cerulean_EventScript_ThiefItems_5
# 63 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeclinedItems
# 64 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
	end

Cerulean_EventScript_ThiefItems_2:
# 42 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_AlreadyGotItems
# 43 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
	end

Cerulean_EventScript_ThiefItems_4:
# 67 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_AfterDelivery
# 68 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
	end

Cerulean_EventScript_ThiefItems_5:
# 48 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ITEMS_CERULEAN
# 49 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_FIRE_STONE, 99
# 50 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_THUNDER_STONE, 99
# 51 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_WATER_STONE, 99
# 52 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_SUN_STONE, 99
# 53 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_MOON_STONE, 99
# 54 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 55 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_HARD_STONE, 99
# 56 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_TWISTED_SPOON, 99
# 57 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 99
# 58 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_RAWST_BERRY, 99
# 59 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 99
# 60 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_CHESTO_BERRY, 99
# 61 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_BIG_MUSHROOM, 99
	goto Cerulean_EventScript_ThiefItems_4


PokemonCenter_Text_DeliverymanIntro::
# 72 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.string "Hello there! I'm a deliveryman from\n"
	.string "the POKéMON ITEM TRADING COMPANY.\p"
	.string "We've received a lot of lost items\n"
	.string "from wild POKéMON recently.\p"
	.string "Rather than return them, we've been\n"
	.string "asked to distribute them to worthy\l"
	.string "TRAINERS.\p"
	.string "Would you like to receive some of\n"
	.string "these items?$"

PokemonCenter_Text_DeclinedItems::
# 84 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.string "No? Well, that's surprising!\p"
	.string "These items are quite rare and\n"
	.string "valuable, you know.\p"
	.string "Feel free to come back if you\n"
	.string "change your mind!$"

PokemonCenter_Text_AfterDelivery::
# 92 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.string "Those items are quite special!\p"
	.string "They're normally very hard to find\n"
	.string "in the wild.\p"
	.string "I hope they help you on your\n"
	.string "journey!$"

PokemonCenter_Text_AlreadyGotItems::
# 100 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.string "Oh! You're the TRAINER I gave\n"
	.string "those special items to!\p"
	.string "I hope you're putting them to\n"
	.string "good use!$"
