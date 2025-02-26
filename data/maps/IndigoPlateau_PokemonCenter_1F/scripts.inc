# 1 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
.set LOCALID_DOOR_GUARD, 4
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_MapScripts::
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_INDIGO_PLATEAU
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 13 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 15 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	return
# 18 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end

Indigo_GiveThiefItems::
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_ITEMS_INDIGO, Indigo_GiveThiefItems_2
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeliverymanIntro, MSGBOX_YESNO
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Indigo_GiveThiefItems_5
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_DeclinedItems
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end

Indigo_GiveThiefItems_2:
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_AlreadyGotItems
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end

Indigo_GiveThiefItems_4:
# 79 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox PokemonCenter_Text_AfterDelivery
# 80 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
	end

Indigo_GiveThiefItems_5:
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setflag FLAG_RECEIVED_ITEMS_INDIGO
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	giveitem ITEM_KINGS_ROCK, 10
	goto Indigo_GiveThiefItems_4

