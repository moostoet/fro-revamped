EventScript_InflictStatusMenu::
# 2 "data/scripts/status.pory"
	lockall
# 3 "data/scripts/status.pory"
	getpartysize
# 5 "data/scripts/status.pory"
	compare VAR_RESULT, 0
	goto_if_eq EventScript_InflictStatusMenu_2
# 11 "data/scripts/status.pory"
	special ChoosePartyMon
# 12 "data/scripts/status.pory"
	waitstate
# 14 "data/scripts/status.pory"
	compare VAR_0x8004, 6
	goto_if_ge EventScript_InflictStatusMenu_5
# 19 "data/scripts/status.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 21 "data/scripts/status.pory"
	compare VAR_RESULT, SPECIES_EGG
	goto_if_eq EventScript_InflictStatusMenu_8
# 26 "data/scripts/status.pory"
	dynmultipush EventScript_InflictStatusMenu_Text_1, STATUS1_POISON
# 27 "data/scripts/status.pory"
	dynmultipush EventScript_InflictStatusMenu_Text_2, STATUS1_PARALYSIS
# 28 "data/scripts/status.pory"
	dynmultipush EventScript_InflictStatusMenu_Text_3, STATUS1_SLEEP
# 29 "data/scripts/status.pory"
	dynmultipush EventScript_InflictStatusMenu_Text_4, STATUS1_BURN
# 30 "data/scripts/status.pory"
	dynmultipush EventScript_InflictStatusMenu_Text_5, STATUS1_FREEZE
# 31 "data/scripts/status.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, 255
# 32 "data/scripts/status.pory"
	compare VAR_RESULT, 127
	goto_if_eq EventScript_InflictStatusMenu_11
# 36 "data/scripts/status.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 37 "data/scripts/status.pory"
	special InflictStatus
	end

EventScript_InflictStatusMenu_2:
# 6 "data/scripts/status.pory"
	msgbox EventScript_InflictStatusMenu_Text_0, MSGBOX_DEFAULT
# 7 "data/scripts/status.pory"
	releaseall
	end

EventScript_InflictStatusMenu_5:
# 15 "data/scripts/status.pory"
	releaseall
	end

EventScript_InflictStatusMenu_8:
# 22 "data/scripts/status.pory"
	releaseall
	end

EventScript_InflictStatusMenu_11:
# 33 "data/scripts/status.pory"
	releaseall
	end


EventScript_InflictStatusMenu_Text_0:
# 6 "data/scripts/status.pory"
	.string "Your PARTY has no POKéMON.$"

EventScript_InflictStatusMenu_Text_1:
# 26 "data/scripts/status.pory"
	.string "Poison$"

EventScript_InflictStatusMenu_Text_2:
# 27 "data/scripts/status.pory"
	.string "Paralysis$"

EventScript_InflictStatusMenu_Text_3:
# 28 "data/scripts/status.pory"
	.string "Sleep$"

EventScript_InflictStatusMenu_Text_4:
# 29 "data/scripts/status.pory"
	.string "Burn$"

EventScript_InflictStatusMenu_Text_5:
# 30 "data/scripts/status.pory"
	.string "Freeze$"
