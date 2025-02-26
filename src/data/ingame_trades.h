static const struct InGameTrade sInGameTrades[] = {
    [INGAME_TRADE_MR_MIME] = 
    {
        .nickname = _("SOLEIL"),
        .species = SPECIES_MR_MIME,
        .ivs = {20, 15, 17, 24, 31, 22},
        .abilityNum = 0,
        .otId = 1985,
        .conditions = {5, 5, 5, 30, 5},
        .personality = 0x00009CB3,
        .heldItem = ITEM_SITRUS_BERRY,
        .mailNum = 255,
        .otName = _("RILEY"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_MAGNEMITE
    }, 
    [INGAME_TRADE_JYNX] = 
    {
        .nickname = _("RAMEN"),
        .species = SPECIES_LICKITUNG,
        .ivs = {18, 31, 18, 22, 8, 21},
        .abilityNum = 0,
        .otId = 36728,
        .conditions = {5, 30, 5, 5, 5},
        .personality = 0x498a2e1d,
        .heldItem = ITEM_TM24,
        .mailNum = 0,
        .otName = _("DONTAE"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_RALTS
    }, 
    [INGAME_TRADE_NIDORAN] = 
    {
#if defined(FIRERED)
        .nickname = _("CELCIUS"),
        .species = SPECIES_SNORUNT,
        .ivs = {22, 18, 25, 17, 31, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x4C970B94,
        .heldItem = ITEM_TM13,
        .mailNum = 255,
        .otName = _("CHERYL"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_SEEDOT
#elif defined(LEAFGREEN)
        .nickname = _("MR. NIDO"),
        .species = SPECIES_NIDORAN_M,
        .ivs = {22, 18, 25, 17, 31, 22},
        .abilityNum = 0,
        .otId = 63184,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x4c970b9e,
        .heldItem = ITEM_TINY_MUSHROOM,
        .mailNum = 255,
        .otName = _("CHERYL"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORAN_F
#endif
    }, 
    [INGAME_TRADE_FARFETCHD] = 
    {
        .nickname = _("CH'DING"),
        .species = SPECIES_FARFETCHD,
        .ivs = {20, 25, 21, 24, 15, 20},
        .abilityNum = 0,
        .otId = 8810,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x151943d7,
        .heldItem = ITEM_STICK,
        .mailNum = 255,
        .otName = _("ELYSSA"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_TAILLOW
    }, 
    [INGAME_TRADE_NIDORINOA] = 
    {
#if defined(FIRERED)
        .nickname = _("TINA"),
        .species = SPECIES_DRATINI,
        .ivs = {22, 31, 18, 31, 22, 15},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0x00eeca15,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("TURNER"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_DRATINI
#elif defined(LEAFGREEN)
        .nickname = _("NINO"),
        .species = SPECIES_NIDORINO,
        .ivs = {19, 18, 25, 22, 15, 22},
        .abilityNum = 0,
        .otId = 13637,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x00eeca19,
        .heldItem = ITEM_NONE,
        .mailNum = 255,
        .otName = _("TURNER"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_NIDORINA
#endif
    }, 
    [INGAME_TRADE_LICKITUNG] = 
    {
        .nickname = _("MARC"),
        .species = SPECIES_MEDICHAM,
        .ivs = {24, 31, 11, 31, 18, 11},
        .abilityNum = 0,
        .otId = 1239,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0x451308a7,
        .heldItem = ITEM_BIG_MUSHROOM,
        .mailNum = 255,
        .otName = _("THORTON"),
        .otGender = MALE,
        .sheen = 10,
#if defined(FIRERED)
        .requestedSpecies = SPECIES_FLAAFFY
#elif defined(LEAFGREEN)
        .requestedSpecies = SPECIES_SLOWBRO
#endif
    }, 
    [INGAME_TRADE_ELECTRODE] = 
    {
        .nickname = _("ESPHERE"),
        .species = SPECIES_EXEGGUTOR,
        .ivs = {19, 16, 18, 31, 31, 19},
        .abilityNum = 1,
        .otId = 50298,
        .conditions = {30, 5, 5, 5, 5},
        .personality = 0x0634101A,
        .heldItem = ITEM_BIG_MUSHROOM,
        .mailNum = 255,
        .otName = _("CLIFTON"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_GRANBULL
    }, 
    [INGAME_TRADE_TANGELA] = 
    {
        .nickname = _("MINNIE"),
        .species = SPECIES_MILTANK,
        .ivs = {22, 31, 25, 31, 3, 20},
        .abilityNum = 0,
        .otId = 60042,
        .conditions = {5, 5, 30, 5, 5},
        .personality = 0X5C77ECE7,
        .heldItem = ITEM_MOOMOO_MILK,
        .mailNum = 255,
        .otName = _("NORMA"),
        .otGender = FEMALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_DONPHAN
    },
    [INGAME_TRADE_SEEL] = 
    {
        .nickname = _("KOMONDO"),
        .species = SPECIES_SHELGON,
        .ivs = {24, 31, 22, 22, 23, 22},
        .abilityNum = 0,
        .otId = 9853,
        .conditions = {5, 5, 5, 5, 30},
        .personality = 0X482CAC88,
        .heldItem = ITEM_TM35,
        .mailNum = 255,
        .otName = _("GARETT"),
        .otGender = MALE,
        .sheen = 10,
        .requestedSpecies = SPECIES_CAMERUPT
    }
};

static const u16 sInGameTradeMailMessages[][10] = {
    {
        EC_WORD_THAT_S,
        EC_WORD_A,
        EC_WORD_HEALTHY,
        EC_POKEMON(JYNX),
        EC_WORD_EXCL,
        EC_WORD_BE,
        EC_WORD_KIND,
        EC_WORD_TO,
        EC_WORD_IT
    }
};
