# 1 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 2 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
.set LOCALID_PROF_OAK, 1
# 3 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 4 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_MapScripts::
# 5 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_OnFrame
# 6 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 7 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 9 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnWarp::
# 10 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 13 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 16 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 17 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnFrame::
# 18 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
# 19 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 20 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 21 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 22 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	lockall
# 23 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	clearflag FLAG_BOX_LINK_DISABLED
# 24 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	clearflag FLAG_MED_KIT_DISABLED
# 25 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	clearflag FLAG_SYRINGE_DISABLED
# 26 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 27 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 28 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 29 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 30 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 31 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 32 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 18
# 33 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 34 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	closemessage
# 35 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 37 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 38 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 20
# 39 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 40 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 41 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 40
# 42 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 43 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 44 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setrespawn SPAWN_PALLET_TOWN
# 45 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 46 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	special EnterHallOfFame
# 47 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitstate
# 48 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	releaseall
# 49 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 50 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 51 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom::
# 52 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 53 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 54 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 55 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 56 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 57 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 58 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 59 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 60 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	step_end
