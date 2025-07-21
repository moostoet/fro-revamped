EventScript_UseRelearnerItem::
# 2 "data/scripts/relearner.pory"
	lockall
# 4 "data/scripts/relearner.pory"
	special ChooseMonForMoveRelearner
# 5 "data/scripts/relearner.pory"
	waitstate
# 7 "data/scripts/relearner.pory"
	compare VAR_0x8004, 6
# 8 "data/scripts/relearner.pory"
	goto_if_eq EventScript_UseRelearnerItem_End
# 10 "data/scripts/relearner.pory"
	special TeachMoveRelearnerMove
# 11 "data/scripts/relearner.pory"
	waitstate
	return


EventScript_UseRelearnerItem_End::
# 15 "data/scripts/relearner.pory"
	releaseall
	end

