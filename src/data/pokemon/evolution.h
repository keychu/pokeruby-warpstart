#ifndef POKERUBY_EVOLUTION_H
#define POKERUBY_EVOLUTION_H

#include "constants/maps.h"

struct Evolution gEvolutionTable[NUM_SPECIES][8] =
{
    [SPECIES_BULBASAUR]  = {{EVO_LEVEL, 16, SPECIES_IVYSAUR}},
    [SPECIES_IVYSAUR]    = {{EVO_LEVEL, 32, SPECIES_VENUSAUR}},
    [SPECIES_CHARMANDER] = {{EVO_LEVEL, 16, SPECIES_CHARMELEON}},
    [SPECIES_CHARMELEON] = {{EVO_LEVEL, 36, SPECIES_CHARIZARD}},
    [SPECIES_SQUIRTLE]   = {{EVO_LEVEL, 16, SPECIES_WARTORTLE}},
    [SPECIES_WARTORTLE]  = {{EVO_LEVEL, 36, SPECIES_BLASTOISE}},
    [SPECIES_CATERPIE]   = {{EVO_LEVEL,  7, SPECIES_METAPOD}},
    [SPECIES_METAPOD]    = {{EVO_LEVEL, 10, SPECIES_BUTTERFREE}},
    [SPECIES_WEEDLE]     = {{EVO_LEVEL,  7, SPECIES_KAKUNA}},
    [SPECIES_KAKUNA]     = {{EVO_LEVEL, 10, SPECIES_BEEDRILL}},
    [SPECIES_PIDGEY]     = {{EVO_LEVEL, 18, SPECIES_PIDGEOTTO}},
    [SPECIES_PIDGEOTTO]  = {{EVO_LEVEL, 36, SPECIES_PIDGEOT}},
    [SPECIES_RATTATA]    = {{EVO_LEVEL, 20, SPECIES_RATICATE}},
    [SPECIES_SPEAROW]    = {{EVO_LEVEL, 20, SPECIES_FEAROW}},
    [SPECIES_EKANS]      = {{EVO_LEVEL, 22, SPECIES_ARBOK}},
    [SPECIES_PIKACHU]    = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_RAICHU}},
    [SPECIES_SANDSHREW]  = {{EVO_LEVEL, 22, SPECIES_SANDSLASH}},
    [SPECIES_NIDORAN_F]  = {{EVO_LEVEL, 16, SPECIES_NIDORINA}},
    [SPECIES_NIDORINA]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN}},
    [SPECIES_NIDORAN_M]  = {{EVO_LEVEL, 16, SPECIES_NIDORINO}},
    [SPECIES_NIDORINO]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING}},
    [SPECIES_CLEFAIRY]   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE}},
    [SPECIES_VULPIX]     = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES}},
    [SPECIES_JIGGLYPUFF] = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF}},
    [SPECIES_ZUBAT]      = {{EVO_LEVEL, 22, SPECIES_GOLBAT}},
    [SPECIES_GOLBAT]     = {{EVO_FRIENDSHIP, 0, SPECIES_CROBAT}},
    [SPECIES_ODDISH]     = {{EVO_LEVEL, 21, SPECIES_GLOOM}},
    [SPECIES_GLOOM]      = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME},
                            {EVO_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM}},
    [SPECIES_PARAS]      = {{EVO_LEVEL, 24, SPECIES_PARASECT}},
    [SPECIES_VENONAT]    = {{EVO_LEVEL, 31, SPECIES_VENOMOTH}},
    [SPECIES_DIGLETT]    = {{EVO_LEVEL, 26, SPECIES_DUGTRIO}},
    [SPECIES_MEOWTH]     = {{EVO_LEVEL, 28, SPECIES_PERSIAN}},
    [SPECIES_PSYDUCK]    = {{EVO_LEVEL, 33, SPECIES_GOLDUCK}},
    [SPECIES_MANKEY]     = {{EVO_LEVEL, 28, SPECIES_PRIMEAPE}},
    [SPECIES_GROWLITHE]  = {{EVO_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE}},
    [SPECIES_POLIWAG]    = {{EVO_LEVEL, 25, SPECIES_POLIWHIRL}},
    [SPECIES_POLIWHIRL]  = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_POLITOED}},
    [SPECIES_ABRA]       = {{EVO_LEVEL, 16, SPECIES_KADABRA}},
    [SPECIES_KADABRA]    = {{EVO_TRADE, 0, SPECIES_ALAKAZAM}},
    [SPECIES_MACHOP]     = {{EVO_LEVEL, 28, SPECIES_MACHOKE}},
    [SPECIES_MACHOKE]    = {{EVO_TRADE, 0, SPECIES_MACHAMP}},
    [SPECIES_BELLSPROUT] = {{EVO_LEVEL, 21, SPECIES_WEEPINBELL}},
    [SPECIES_WEEPINBELL] = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL}},
    [SPECIES_TENTACOOL]  = {{EVO_LEVEL, 30, SPECIES_TENTACRUEL}},
    [SPECIES_GEODUDE]    = {{EVO_LEVEL, 25, SPECIES_GRAVELER}},
    [SPECIES_GRAVELER]   = {{EVO_TRADE, 0, SPECIES_GOLEM}},
    [SPECIES_PONYTA]     = {{EVO_LEVEL, 40, SPECIES_RAPIDASH}},
    [SPECIES_SLOWPOKE]   = {{EVO_LEVEL, 37, SPECIES_SLOWBRO},
                            {EVO_TRADE_ITEM, ITEM_KINGS_ROCK, SPECIES_SLOWKING}},
    [SPECIES_MAGNEMITE]  = {{EVO_LEVEL, 30, SPECIES_MAGNETON}},
    [SPECIES_DODUO]      = {{EVO_LEVEL, 31, SPECIES_DODRIO}},
    [SPECIES_SEEL]       = {{EVO_LEVEL, 34, SPECIES_DEWGONG}},
    [SPECIES_GRIMER]     = {{EVO_LEVEL, 38, SPECIES_MUK}},
    [SPECIES_SHELLDER]   = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER}},
    [SPECIES_GASTLY]     = {{EVO_LEVEL, 25, SPECIES_HAUNTER}},
    [SPECIES_HAUNTER]    = {{EVO_TRADE, 0, SPECIES_GENGAR}},
    [SPECIES_ONIX]       = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_STEELIX}},
    [SPECIES_DROWZEE]    = {{EVO_LEVEL, 26, SPECIES_HYPNO}},
    [SPECIES_KRABBY]     = {{EVO_LEVEL, 28, SPECIES_KINGLER}},
    [SPECIES_VOLTORB]    = {{EVO_LEVEL, 30, SPECIES_ELECTRODE}},
    [SPECIES_EXEGGCUTE]  = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR}},
    [SPECIES_CUBONE]     = {{EVO_LEVEL, 28, SPECIES_MAROWAK}},
    [SPECIES_KOFFING]    = {{EVO_LEVEL, 35, SPECIES_WEEZING}},
    [SPECIES_RHYHORN]    = {{EVO_LEVEL, 42, SPECIES_RHYDON}},
    [SPECIES_CHANSEY]    = {{EVO_FRIENDSHIP, 0, SPECIES_BLISSEY}},
    [SPECIES_HORSEA]     = {{EVO_LEVEL, 32, SPECIES_SEADRA}},
    [SPECIES_SEADRA]     = {{EVO_TRADE_ITEM, ITEM_DRAGON_SCALE, SPECIES_KINGDRA}},
    [SPECIES_GOLDEEN]    = {{EVO_LEVEL, 33, SPECIES_SEAKING}},
    [SPECIES_STARYU]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE}},
    [SPECIES_SCYTHER]    = {{EVO_TRADE_ITEM, ITEM_METAL_COAT, SPECIES_SCIZOR}},
    [SPECIES_MAGIKARP]   = {{EVO_LEVEL, 20, SPECIES_GYARADOS}},
    [SPECIES_EEVEE]      = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_JOLTEON},
                               {EVO_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON},
                               {EVO_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON},
                               {EVO_FRIENDSHIP_DAY, 0, SPECIES_ESPEON},
                               {EVO_FRIENDSHIP_NIGHT, 0, SPECIES_UMBREON},
                               {EVO_MAP, MAP_PETALBURG_WOODS, SPECIES_LEAFEON},
                               {EVO_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_GLACEON},
                               {EVO_MOVE_TYPE, TYPE_FAIRY, SPECIES_SYLVEON}},
    [SPECIES_PORYGON]    = {{EVO_TRADE_ITEM, ITEM_UP_GRADE, SPECIES_PORYGON2}},
    [SPECIES_OMANYTE]    = {{EVO_LEVEL, 40, SPECIES_OMASTAR}},
    [SPECIES_KABUTO]     = {{EVO_LEVEL, 40, SPECIES_KABUTOPS}},
    [SPECIES_DRATINI]    = {{EVO_LEVEL, 30, SPECIES_DRAGONAIR}},
    [SPECIES_DRAGONAIR]  = {{EVO_LEVEL, 55, SPECIES_DRAGONITE}},
    [SPECIES_CHIKORITA]  = {{EVO_LEVEL, 16, SPECIES_BAYLEEF}},
    [SPECIES_BAYLEEF]    = {{EVO_LEVEL, 32, SPECIES_MEGANIUM}},
    [SPECIES_CYNDAQUIL]  = {{EVO_LEVEL, 14, SPECIES_QUILAVA}},
    [SPECIES_QUILAVA]    = {{EVO_LEVEL, 36, SPECIES_TYPHLOSION}},
    [SPECIES_TOTODILE]   = {{EVO_LEVEL, 18, SPECIES_CROCONAW}},
    [SPECIES_CROCONAW]   = {{EVO_LEVEL, 30, SPECIES_FERALIGATR}},
    [SPECIES_SENTRET]    = {{EVO_LEVEL, 15, SPECIES_FURRET}},
    [SPECIES_HOOTHOOT]   = {{EVO_LEVEL, 20, SPECIES_NOCTOWL}},
    [SPECIES_LEDYBA]     = {{EVO_LEVEL, 18, SPECIES_LEDIAN}},
    [SPECIES_SPINARAK]   = {{EVO_LEVEL, 22, SPECIES_ARIADOS}},
    [SPECIES_CHINCHOU]   = {{EVO_LEVEL, 27, SPECIES_LANTURN}},
    [SPECIES_PICHU]      = {{EVO_FRIENDSHIP, 0, SPECIES_PIKACHU}},
    [SPECIES_CLEFFA]     = {{EVO_FRIENDSHIP, 0, SPECIES_CLEFAIRY}},
    [SPECIES_IGGLYBUFF]  = {{EVO_FRIENDSHIP, 0, SPECIES_JIGGLYPUFF}},
    [SPECIES_TOGEPI]     = {{EVO_FRIENDSHIP, 0, SPECIES_TOGETIC}},
    [SPECIES_NATU]       = {{EVO_LEVEL, 25, SPECIES_XATU}},
    [SPECIES_MAREEP]     = {{EVO_LEVEL, 15, SPECIES_FLAAFFY}},
    [SPECIES_FLAAFFY]    = {{EVO_LEVEL, 30, SPECIES_AMPHAROS}},
    [SPECIES_MARILL]     = {{EVO_LEVEL, 18, SPECIES_AZUMARILL}},
    [SPECIES_HOPPIP]     = {{EVO_LEVEL, 18, SPECIES_SKIPLOOM}},
    [SPECIES_SKIPLOOM]   = {{EVO_LEVEL, 27, SPECIES_JUMPLUFF}},
    [SPECIES_SUNKERN]    = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA}},
    [SPECIES_WOOPER]     = {{EVO_LEVEL, 20, SPECIES_QUAGSIRE}},
    [SPECIES_PINECO]     = {{EVO_LEVEL, 31, SPECIES_FORRETRESS}},
    [SPECIES_SNUBBULL]   = {{EVO_LEVEL, 23, SPECIES_GRANBULL}},
    [SPECIES_TEDDIURSA]  = {{EVO_LEVEL, 30, SPECIES_URSARING}},
    [SPECIES_SLUGMA]     = {{EVO_LEVEL, 38, SPECIES_MAGCARGO}},
    [SPECIES_SWINUB]     = {{EVO_LEVEL, 33, SPECIES_PILOSWINE}},
    [SPECIES_REMORAID]   = {{EVO_LEVEL, 25, SPECIES_OCTILLERY}},
    [SPECIES_HOUNDOUR]   = {{EVO_LEVEL, 24, SPECIES_HOUNDOOM}},
    [SPECIES_PHANPY]     = {{EVO_LEVEL, 25, SPECIES_DONPHAN}},
    [SPECIES_TYROGUE]    = {{EVO_LEVEL_ATK_LT_DEF, 20, SPECIES_HITMONCHAN},
                            {EVO_LEVEL_ATK_GT_DEF, 20, SPECIES_HITMONLEE},
                            {EVO_LEVEL_ATK_EQ_DEF, 20, SPECIES_HITMONTOP}},
    [SPECIES_SMOOCHUM]   = {{EVO_LEVEL, 30, SPECIES_JYNX}},
    [SPECIES_ELEKID]     = {{EVO_LEVEL, 30, SPECIES_ELECTABUZZ}},
    [SPECIES_MAGBY]      = {{EVO_LEVEL, 30, SPECIES_MAGMAR}},
    [SPECIES_LARVITAR]   = {{EVO_LEVEL, 30, SPECIES_PUPITAR}},
    [SPECIES_PUPITAR]    = {{EVO_LEVEL, 55, SPECIES_TYRANITAR}},
    [SPECIES_TREECKO]    = {{EVO_LEVEL, 16, SPECIES_GROVYLE}},
    [SPECIES_GROVYLE]    = {{EVO_LEVEL, 36, SPECIES_SCEPTILE}},
    [SPECIES_TORCHIC]    = {{EVO_LEVEL, 16, SPECIES_COMBUSKEN}},
    [SPECIES_COMBUSKEN]  = {{EVO_LEVEL, 36, SPECIES_BLAZIKEN}},
    [SPECIES_MUDKIP]     = {{EVO_LEVEL, 16, SPECIES_MARSHTOMP}},
    [SPECIES_MARSHTOMP]  = {{EVO_LEVEL, 36, SPECIES_SWAMPERT}},
    [SPECIES_POOCHYENA]  = {{EVO_LEVEL, 18, SPECIES_MIGHTYENA}},
    [SPECIES_ZIGZAGOON]  = {{EVO_LEVEL, 20, SPECIES_LINOONE}},
    [SPECIES_WURMPLE]    = {{EVO_LEVEL_SILCOON, 7, SPECIES_SILCOON},
                            {EVO_LEVEL_CASCOON, 7, SPECIES_CASCOON}},
    [SPECIES_SILCOON]    = {{EVO_LEVEL, 10, SPECIES_BEAUTIFLY}},
    [SPECIES_CASCOON]    = {{EVO_LEVEL, 10, SPECIES_DUSTOX}},
    [SPECIES_LOTAD]      = {{EVO_LEVEL, 14, SPECIES_LOMBRE}},
    [SPECIES_LOMBRE]     = {{EVO_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO}},
    [SPECIES_SEEDOT]     = {{EVO_LEVEL, 14, SPECIES_NUZLEAF}},
    [SPECIES_NUZLEAF]    = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY}},
    [SPECIES_NINCADA]    = {{EVO_LEVEL_NINJASK, 20, SPECIES_NINJASK},
                            {EVO_LEVEL_SHEDINJA, 20, SPECIES_SHEDINJA}},
    [SPECIES_TAILLOW]    = {{EVO_LEVEL, 22, SPECIES_SWELLOW}},
    [SPECIES_SHROOMISH]  = {{EVO_LEVEL, 23, SPECIES_BRELOOM}},
    [SPECIES_WINGULL]    = {{EVO_LEVEL, 25, SPECIES_PELIPPER}},
    [SPECIES_SURSKIT]    = {{EVO_LEVEL, 22, SPECIES_MASQUERAIN}},
    [SPECIES_WAILMER]    = {{EVO_LEVEL, 40, SPECIES_WAILORD}},
    [SPECIES_SKITTY]     = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY}},
    [SPECIES_BALTOY]     = {{EVO_LEVEL, 36, SPECIES_CLAYDOL}},
    [SPECIES_BARBOACH]   = {{EVO_LEVEL, 30, SPECIES_WHISCASH}},
    [SPECIES_CORPHISH]   = {{EVO_LEVEL, 30, SPECIES_CRAWDAUNT}},
    [SPECIES_FEEBAS]     = {{EVO_BEAUTY, 170, SPECIES_MILOTIC}},
    [SPECIES_CARVANHA]   = {{EVO_LEVEL, 30, SPECIES_SHARPEDO}},
    [SPECIES_TRAPINCH]   = {{EVO_LEVEL, 35, SPECIES_VIBRAVA}},
    [SPECIES_VIBRAVA]    = {{EVO_LEVEL, 45, SPECIES_FLYGON}},
    [SPECIES_MAKUHITA]   = {{EVO_LEVEL, 24, SPECIES_HARIYAMA}},
    [SPECIES_ELECTRIKE]  = {{EVO_LEVEL, 26, SPECIES_MANECTRIC}},
    [SPECIES_NUMEL]      = {{EVO_LEVEL, 33, SPECIES_CAMERUPT}},
    [SPECIES_SPHEAL]     = {{EVO_LEVEL, 32, SPECIES_SEALEO}},
    [SPECIES_SEALEO]     = {{EVO_LEVEL, 44, SPECIES_WALREIN}},
    [SPECIES_CACNEA]     = {{EVO_LEVEL, 32, SPECIES_CACTURNE}},
    [SPECIES_SNORUNT]	 = {{EVO_LEVEL, 42, SPECIES_GLALIE}, 
                               {EVO_ITEM_FEMALE, ITEM_MOON_STONE, SPECIES_FROSLASS}},
    [SPECIES_AZURILL]    = {{EVO_FRIENDSHIP, 0, SPECIES_MARILL}},
    [SPECIES_SPOINK]     = {{EVO_LEVEL, 32, SPECIES_GRUMPIG}},
    [SPECIES_MEDITITE]   = {{EVO_LEVEL, 37, SPECIES_MEDICHAM}},
    [SPECIES_SWABLU]     = {{EVO_LEVEL, 35, SPECIES_ALTARIA}},
    [SPECIES_WYNAUT]     = {{EVO_LEVEL, 15, SPECIES_WOBBUFFET}},
    [SPECIES_DUSKULL]    = {{EVO_LEVEL, 37, SPECIES_DUSCLOPS}},
    [SPECIES_SLAKOTH]    = {{EVO_LEVEL, 18, SPECIES_VIGOROTH}},
    [SPECIES_VIGOROTH]   = {{EVO_LEVEL, 36, SPECIES_SLAKING}},
    [SPECIES_GULPIN]     = {{EVO_LEVEL, 26, SPECIES_SWALOT}},
    [SPECIES_WHISMUR]    = {{EVO_LEVEL, 20, SPECIES_LOUDRED}},
    [SPECIES_LOUDRED]    = {{EVO_LEVEL, 40, SPECIES_EXPLOUD}},
    [SPECIES_CLAMPERL]   = {{EVO_TRADE_ITEM, ITEM_DEEP_SEA_TOOTH, SPECIES_HUNTAIL},
                            {EVO_TRADE_ITEM, ITEM_DEEP_SEA_SCALE, SPECIES_GOREBYSS}},
    [SPECIES_SHUPPET]    = {{EVO_LEVEL, 37, SPECIES_BANETTE}},
    [SPECIES_ARON]       = {{EVO_LEVEL, 32, SPECIES_LAIRON}},
    [SPECIES_LAIRON]     = {{EVO_LEVEL, 42, SPECIES_AGGRON}},
    [SPECIES_LILEEP]     = {{EVO_LEVEL, 40, SPECIES_CRADILY}},
    [SPECIES_ANORITH]    = {{EVO_LEVEL, 40, SPECIES_ARMALDO}},
    [SPECIES_RALTS]      = {{EVO_LEVEL, 20, SPECIES_KIRLIA}},
    [SPECIES_KIRLIA]	 = {{EVO_LEVEL, 30, SPECIES_GARDEVOIR},
                               {EVO_ITEM_MALE, ITEM_SUN_STONE, SPECIES_GALLADE}},
    [SPECIES_BAGON]      = {{EVO_LEVEL, 30, SPECIES_SHELGON}},
    [SPECIES_SHELGON]    = {{EVO_LEVEL, 50, SPECIES_SALAMENCE}},
    [SPECIES_BELDUM]     = {{EVO_LEVEL, 20, SPECIES_METANG}},
    [SPECIES_METANG]     = {{EVO_LEVEL, 45, SPECIES_METAGROSS}},
    [SPECIES_TURTWIG]          = {{EVO_LEVEL, 18, SPECIES_GROTLE}},
    [SPECIES_GROTLE]	       = {{EVO_LEVEL, 32, SPECIES_TORTERRA}},
    [SPECIES_CHIMCHAR]	       = {{EVO_LEVEL, 14, SPECIES_MONFERNO}},
    [SPECIES_MONFERNO]	       = {{EVO_LEVEL, 36, SPECIES_INFERNAPE}},
    [SPECIES_PIPLUP]	       = {{EVO_LEVEL, 16, SPECIES_PRINPLUP}},
    [SPECIES_PRINPLUP]	       = {{EVO_LEVEL, 36, SPECIES_EMPOLEON}},
    [SPECIES_STARLY]	       = {{EVO_LEVEL, 14, SPECIES_STARAVIA}},
    [SPECIES_STARAVIA]	       = {{EVO_LEVEL, 34, SPECIES_STARAPTOR}},
    [SPECIES_BIDOOF]	       = {{EVO_LEVEL, 15, SPECIES_BIBAREL}},
    [SPECIES_KRICKETOT]	       = {{EVO_LEVEL, 10, SPECIES_KRICKETUNE}},
    [SPECIES_SHINX]	           = {{EVO_LEVEL, 15, SPECIES_LUXIO}},
    [SPECIES_LUXIO]	           = {{EVO_LEVEL, 30, SPECIES_LUXRAY}},
    [SPECIES_BUDEW]	           = {{EVO_FRIENDSHIP_DAY, 0, SPECIES_ROSERADE}},
    [SPECIES_CRANIDOS]	       = {{EVO_LEVEL, 30, SPECIES_RAMPARDOS}},
    [SPECIES_SHIELDON]	       = {{EVO_LEVEL, 30, SPECIES_BASTIODON}},
    [SPECIES_BURMY]	           = {{EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM},
                                {EVO_LEVEL_MALE, 20, SPECIES_MOTHIM}},
    [SPECIES_COMBEE]	       = {{EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN}},
    [SPECIES_BUIZEL]	       = {{EVO_LEVEL, 26, SPECIES_FLOATZEL}},
    [SPECIES_CHERUBI]	       = {{EVO_LEVEL, 25, SPECIES_CHERRIM}},
    [SPECIES_SHELLOS]	       = {{EVO_LEVEL, 30, SPECIES_CHERRIM}},
    [SPECIES_DRIFLOON]	       = {{EVO_LEVEL, 28, SPECIES_DRIFBLIM}},
    [SPECIES_BUNEARY]	       = {{EVO_FRIENDSHIP, 0, SPECIES_LOPUNNY}},
    [SPECIES_GLAMEOW]	       = {{EVO_LEVEL, 38, SPECIES_PURUGLY}},
    [SPECIES_CHINGLING]	       = {{EVO_FRIENDSHIP_NIGHT, 0, SPECIES_CHIMECHO}},
    [SPECIES_STUNKY]	       = {{EVO_LEVEL, 34, SPECIES_SKUNTANK}},
    [SPECIES_BRONZOR]	       = {{EVO_LEVEL, 33, SPECIES_BRONZONG}},
    [SPECIES_BONSLY]	       = {{EVO_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO}},
    [SPECIES_MIME_JR]	       = {{EVO_MOVE, MOVE_MIMIC, SPECIES_MR_MIME}},
    [SPECIES_HAPPINY]	       = {{EVO_HELD_ITEM_DAY, ITEM_MOON_STONE, SPECIES_CHANSEY}},
    [SPECIES_GIBLE]	           = {{EVO_LEVEL, 24, SPECIES_GABITE}},
    [SPECIES_GABITE]	       = {{EVO_LEVEL, 48, SPECIES_GARCHOMP}},
    [SPECIES_MUNCHLAX]	       = {{EVO_FRIENDSHIP, 0, SPECIES_SNORLAX}},
    [SPECIES_RIOLU]	           = {{EVO_FRIENDSHIP_DAY, 0, SPECIES_LUCARIO}},
    [SPECIES_HIPPOPOTAS]	   = {{EVO_LEVEL, 34, SPECIES_HIPPOWDON}},
    [SPECIES_SKORUPI]	       = {{EVO_LEVEL, 40, SPECIES_HIPPOWDON}},
    [SPECIES_CROAGUNK]	       = {{EVO_LEVEL, 37, SPECIES_TOXICROAK}},
    [SPECIES_FINNEON]	       = {{EVO_LEVEL, 31, SPECIES_LUMINEON}},
    [SPECIES_MANTYKE]	       = {{EVO_PARTY_SPECIES, SPECIES_REMORAID, SPECIES_MANTINE}},
    [SPECIES_SNOVER]	       = {{EVO_LEVEL, 40, SPECIES_ABOMASNOW}},

    //Gen 5
    [SPECIES_SNIVY]	           = {{EVO_LEVEL, 17, SPECIES_SERVINE}},
    [SPECIES_SERVINE]	       = {{EVO_LEVEL, 36, SPECIES_SERPERIOR}},
    [SPECIES_TEPIG]	           = {{EVO_LEVEL, 17, SPECIES_PIGNITE}},
    [SPECIES_PIGNITE]	       = {{EVO_LEVEL, 36, SPECIES_EMBOAR}},
    [SPECIES_OSHAWOTT]	       = {{EVO_LEVEL, 17, SPECIES_DEWOTT}},
    [SPECIES_DEWOTT]	       = {{EVO_LEVEL, 36, SPECIES_SAMUROTT}},
    [SPECIES_PATRAT]	       = {{EVO_LEVEL, 20, SPECIES_WATCHOG}},
    [SPECIES_LILLIPUP]	       = {{EVO_LEVEL, 16, SPECIES_HERDIER}},
    [SPECIES_HERDIER]	       = {{EVO_LEVEL, 32, SPECIES_STOUTLAND}},
    [SPECIES_PURRLOIN]	       = {{EVO_LEVEL, 20, SPECIES_LIEPARD}},
    [SPECIES_PANSAGE]	       = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE}},
    [SPECIES_PANSEAR]	       = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISEAR}},
    [SPECIES_PANPOUR]	       = {{EVO_ITEM, ITEM_LEAF_STONE, SPECIES_SIMIPOUR}},
    [SPECIES_MUNNA]	           = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA}},
    [SPECIES_PIDOVE]	       = {{EVO_LEVEL, 21, SPECIES_TRANQUILL}},
    [SPECIES_TRANQUILL]	       = {{EVO_LEVEL, 32, SPECIES_UNFEZANT}},
    [SPECIES_BLITZLE]	       = {{EVO_LEVEL, 27, SPECIES_ZEBSTRIKA}},
    [SPECIES_ROGGENROLA]	   = {{EVO_LEVEL, 25, SPECIES_BOLDORE}},
    [SPECIES_BOLDORE]	       = {{EVO_TRADE, 0, SPECIES_GIGALITH}},
    [SPECIES_WOOBAT]	       = {{EVO_FRIENDSHIP, 0, SPECIES_SWOOBAT}},
    [SPECIES_DRILBUR]	       = {{EVO_LEVEL, 31, SPECIES_EXCADRILL}},
    [SPECIES_TIMBURR]	       = {{EVO_LEVEL, 25, SPECIES_GURDURR}},
    [SPECIES_GURDURR]	       = {{EVO_TRADE, 0, SPECIES_CONKELDURR}},
    [SPECIES_TYMPOLE]	       = {{EVO_LEVEL, 25, SPECIES_PALPITOAD}},
    [SPECIES_PALPITOAD]	       = {{EVO_LEVEL, 36, SPECIES_SEISMITOAD}},
    [SPECIES_SEWADDLE]	       = {{EVO_LEVEL, 20, SPECIES_SWADLOON}},
    [SPECIES_SWADLOON]	       = {{EVO_FRIENDSHIP, 0, SPECIES_LEAVANNY}},
    [SPECIES_VENIPEDE]	       = {{EVO_LEVEL, 22, SPECIES_WHIRLIPEDE}},
    [SPECIES_WHIRLIPEDE]	   = {{EVO_LEVEL, 30, SPECIES_SCOLIPEDE}},
    [SPECIES_COTTONEE]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT}},
    [SPECIES_PETILIL]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT}},
    [SPECIES_SANDILE]	       = {{EVO_LEVEL, 29, SPECIES_KROKOROK}},
    [SPECIES_KROKOROK]	       = {{EVO_LEVEL, 40, SPECIES_KROOKODILE}},
    [SPECIES_DARUMAKA]	       = {{EVO_LEVEL, 35, SPECIES_DARMANITAN}},
    [SPECIES_DWEBBLE]	       = {{EVO_LEVEL, 34, SPECIES_CRUSTLE}},
    [SPECIES_SCRAGGY]	       = {{EVO_LEVEL, 39, SPECIES_SCRAFTY}},
    [SPECIES_YAMASK]	       = {{EVO_LEVEL, 34, SPECIES_COFAGRIGUS}},
    [SPECIES_TIRTOUGA]	       = {{EVO_LEVEL, 37, SPECIES_CARRACOSTA}},
    [SPECIES_ARCHEN]	       = {{EVO_LEVEL, 34, SPECIES_ARCHEOPS}},
    [SPECIES_TRUBBISH]	       = {{EVO_LEVEL, 36, SPECIES_GARBODOR}},
    [SPECIES_ZORUA]	           = {{EVO_LEVEL, 30, SPECIES_ZOROARK}},
    [SPECIES_MINCCINO]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_CINCCINO}},
    [SPECIES_GOTHITA]	       = {{EVO_LEVEL, 32, SPECIES_GOTHORITA}},
    [SPECIES_GOTHORITA]	       = {{EVO_LEVEL, 41, SPECIES_GOTHITELLE}},
    [SPECIES_SOLOSIS]	       = {{EVO_LEVEL, 32, SPECIES_DUOSION}},
    [SPECIES_DUOSION]	       = {{EVO_LEVEL, 41, SPECIES_REUNICLUS}},
    [SPECIES_DUCKLETT]	       = {{EVO_LEVEL, 35, SPECIES_SWANNA}},
    [SPECIES_VANILLITE]	       = {{EVO_LEVEL, 35, SPECIES_VANILLISH}},
    [SPECIES_VANILLISH]	       = {{EVO_LEVEL, 47, SPECIES_VANILLUXE}},
    [SPECIES_DEERLING]	       = {{EVO_LEVEL, 34, SPECIES_SAWSBUCK}},
    [SPECIES_KARRABLAST]	   = {{EVO_TRADE, 0, SPECIES_ESCAVALIER}},
    [SPECIES_FOONGUS]	       = {{EVO_LEVEL, 39, SPECIES_AMOONGUSS}},
    [SPECIES_FRILLISH]	       = {{EVO_LEVEL, 40, SPECIES_JELLICENT}},
    [SPECIES_JOLTIK]	       = {{EVO_LEVEL, 36, SPECIES_GALVANTULA}},
    [SPECIES_FERROSEED]	       = {{EVO_LEVEL, 40, SPECIES_FERROTHORN}},
    [SPECIES_KLINK]	           = {{EVO_LEVEL, 38, SPECIES_KLANG}},
    [SPECIES_KLANG]	           = {{EVO_LEVEL, 49, SPECIES_KLINKLANG}},
    [SPECIES_TYNAMO]	       = {{EVO_LEVEL, 39, SPECIES_EELEKTRIK}},
    [SPECIES_EELEKTRIK]	       = {{EVO_ITEM, ITEM_THUNDER_STONE, SPECIES_EELEKTROSS}},
    [SPECIES_ELGYEM]	       = {{EVO_LEVEL, 42, SPECIES_BEHEEYEM}},
    [SPECIES_LITWICK]	       = {{EVO_LEVEL, 41, SPECIES_LAMPENT}},
    [SPECIES_LAMPENT]	       = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_CHANDELURE}},
    [SPECIES_AXEW]	           = {{EVO_LEVEL, 38, SPECIES_FRAXURE}},
    [SPECIES_FRAXURE]	       = {{EVO_LEVEL, 48, SPECIES_HAXORUS}},
    [SPECIES_CUBCHOO]	       = {{EVO_LEVEL, 37, SPECIES_BEARTIC}},
    [SPECIES_SHELMET]	       = {{EVO_TRADE, 0, SPECIES_ACCELGOR}},
    [SPECIES_MIENFOO]	       = {{EVO_LEVEL, 50, SPECIES_MIENSHAO}},
    [SPECIES_GOLETT]	       = {{EVO_LEVEL, 43, SPECIES_GOLURK}},
    [SPECIES_PAWNIARD]	       = {{EVO_LEVEL, 52, SPECIES_BISHARP}},
    [SPECIES_RUFFLET]	       = {{EVO_LEVEL, 54, SPECIES_BRAVIARY}},
    [SPECIES_VULLABY]	       = {{EVO_LEVEL, 54, SPECIES_MANDIBUZZ}},
    [SPECIES_DEINO]	           = {{EVO_LEVEL, 50, SPECIES_ZWEILOUS}},
    [SPECIES_ZWEILOUS]	       = {{EVO_LEVEL, 64, SPECIES_HYDREIGON}},
    [SPECIES_LARVESTA]	       = {{EVO_LEVEL, 59, SPECIES_VOLCARONA}},

    //Gen 6
    [SPECIES_CHESPIN]	       = {{EVO_LEVEL, 16, SPECIES_QUILLADIN}},
    [SPECIES_QUILLADIN]	       = {{EVO_LEVEL, 36, SPECIES_CHESNAUGHT}},
    [SPECIES_FENNEKIN]	       = {{EVO_LEVEL, 16, SPECIES_BRAIXEN}},
    [SPECIES_BRAIXEN]	       = {{EVO_LEVEL, 36, SPECIES_DELPHOX}},
    [SPECIES_FROAKIE]	       = {{EVO_LEVEL, 16, SPECIES_FROGADIER}},
    [SPECIES_FROGADIER]	       = {{EVO_LEVEL, 36, SPECIES_GRENINJA}},
    [SPECIES_BUNNELBY]	       = {{EVO_LEVEL, 20, SPECIES_DIGGERSBY}},
    [SPECIES_FLETCHLING]	   = {{EVO_LEVEL, 17, SPECIES_FLETCHINDER}},
    [SPECIES_FLETCHINDER]	   = {{EVO_LEVEL, 35, SPECIES_TALONFLAME}},
    [SPECIES_SCATTERBUG]	   = {{EVO_LEVEL, 9, SPECIES_SPEWPA}},
    [SPECIES_SPEWPA]	       = {{EVO_LEVEL, 12, SPECIES_VIVILLON}},
    [SPECIES_LITLEO]	       = {{EVO_LEVEL, 35, SPECIES_PYROAR}},
    [SPECIES_FLABEBE]	       = {{EVO_LEVEL, 19, SPECIES_FLOETTE}},
    [SPECIES_FLOETTE]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_FLORGES}},
    [SPECIES_SKIDDO]	       = {{EVO_LEVEL, 32, SPECIES_GOGOAT}},
    [SPECIES_PANCHAM]	       = {{EVO_LEVEL_PARTY_TYPE, 32, SPECIES_PANGORO}},
    [SPECIES_ESPURR]	       = {{EVO_LEVEL, 25, SPECIES_MEOWSTIC}},
    [SPECIES_HONEDGE]	       = {{EVO_LEVEL, 35, SPECIES_DOUBLADE}},
    [SPECIES_DOUBLADE]	       = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_AEGISLASH}},
    [SPECIES_SPRITZEE]	       = {{EVO_TRADE, 0, SPECIES_AROMATISSE}},
    [SPECIES_SWIRLIX]	       = {{EVO_TRADE, 0, SPECIES_SLURPUFF}},
    [SPECIES_INKAY]	           = {{EVO_LEVEL, 30, SPECIES_MALAMAR}},
    [SPECIES_BINACLE]	       = {{EVO_LEVEL, 39, SPECIES_BARBARACLE}},
    [SPECIES_SKRELP]	       = {{EVO_LEVEL, 48, SPECIES_DRAGALGE}},
    [SPECIES_CLAUNCHER]	       = {{EVO_LEVEL, 37, SPECIES_CLAWITZER}},
    [SPECIES_HELIOPTILE]	   = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_HELIOLISK}},
    [SPECIES_TYRUNT]	       = {{EVO_LEVEL_DAY, 39, SPECIES_TYRANTRUM}},
    [SPECIES_AMAURA]	       = {{EVO_LEVEL_NIGHT, 39, SPECIES_AURORUS}},
    [SPECIES_GOOMY]	           = {{EVO_LEVEL, 40, SPECIES_SLIGGOO}},
    [SPECIES_SLIGGOO]	       = {{EVO_LEVEL_RAIN, 0, SPECIES_GOODRA}},
    [SPECIES_PHANTUMP]	       = {{EVO_TRADE, 0, SPECIES_TREVENANT}},
    [SPECIES_PUMPKABOO]	       = {{EVO_TRADE, 0, SPECIES_GOURGEIST}},
    [SPECIES_BERGMITE]	       = {{EVO_LEVEL, 37, SPECIES_AVALUGG}},
    [SPECIES_NOIBAT]	       = {{EVO_LEVEL, 48, SPECIES_NOIVERN}},

    //Gen 7
    [SPECIES_ROWLET]	       = {{EVO_LEVEL, 17, SPECIES_DARTRIX}},
    [SPECIES_DARTRIX]	       = {{EVO_LEVEL, 34, SPECIES_DECIDUEYE}},
    [SPECIES_LITTEN]	       = {{EVO_LEVEL, 17, SPECIES_TORRACAT}},
    [SPECIES_TORRACAT]	       = {{EVO_LEVEL, 34, SPECIES_INCINEROAR}},
    [SPECIES_POPPLIO]	       = {{EVO_LEVEL, 17, SPECIES_BRIONNE}},
    [SPECIES_BRIONNE]	       = {{EVO_LEVEL, 34, SPECIES_PRIMARINA}},
    [SPECIES_PIKIPEK]	       = {{EVO_LEVEL, 14, SPECIES_TRUMBEAK}},
    [SPECIES_TRUMBEAK]	       = {{EVO_LEVEL, 28, SPECIES_TOUCANNON}},
    [SPECIES_YUNGOOS]	       = {{EVO_LEVEL_DAY, 20, SPECIES_GUMSHOOS}},
    [SPECIES_GRUBBIN]	       = {{EVO_LEVEL, 20, SPECIES_CHARJABUG}},
    [SPECIES_CHARJABUG]        = {{EVO_MAP, MAP_NEW_MAUVILLE_INSIDE, SPECIES_VIKAVOLT}},
    [SPECIES_CRABRAWLER]	   = {{EVO_MAP, MAP_SHOAL_CAVE_LOW_TIDE_ICE_ROOM, SPECIES_CRABOMINABLE}},
    [SPECIES_CUTIEFLY]	       = {{EVO_LEVEL, 25, SPECIES_RIBOMBEE}},
    [SPECIES_ROCKRUFF]	       = {{EVO_LEVEL, 25, SPECIES_LYCANROC}},
    [SPECIES_MAREANIE]	       = {{EVO_LEVEL, 38, SPECIES_TOXAPEX}},
    [SPECIES_MUDBRAY]	       = {{EVO_LEVEL, 30, SPECIES_MUDSDALE}},
    [SPECIES_DEWPIDER]	       = {{EVO_LEVEL, 22, SPECIES_ARAQUANID}},
    [SPECIES_FOMANTIS]	       = {{EVO_LEVEL_DAY, 34, SPECIES_LURANTIS}},
    [SPECIES_MORELULL]	       = {{EVO_LEVEL, 24, SPECIES_SHIINOTIC}},
    [SPECIES_SALANDIT]	       = {{EVO_LEVEL_FEMALE, 33, SPECIES_SALAZZLE}},
    [SPECIES_STUFFUL]	       = {{EVO_LEVEL, 27, SPECIES_BEWEAR}},
    [SPECIES_BOUNSWEET]	       = {{EVO_LEVEL, 18, SPECIES_STEENEE}},
    [SPECIES_STEENEE]	       = {{EVO_MOVE, MOVE_STOMP, SPECIES_TSAREENA}},
    [SPECIES_WIMPOD]	       = {{EVO_LEVEL, 30, SPECIES_GOLISOPOD}},
    [SPECIES_SANDYGAST]	       = {{EVO_LEVEL, 42, SPECIES_PALOSSAND}},
    [SPECIES_TYPE_NULL]	       = {{EVO_FRIENDSHIP, 0, SPECIES_SILVALLY}},
    [SPECIES_JANGMO_O]	       = {{EVO_LEVEL, 35, SPECIES_HAKAMO_O}},
    [SPECIES_HAKAMO_O]	       = {{EVO_LEVEL, 45, SPECIES_KOMMO_O}},
    [SPECIES_COSMOG]	       = {{EVO_LEVEL, 43, SPECIES_COSMOEM}},
    [SPECIES_COSMOEM]	       = {{EVO_LEVEL_DAY, 53, SPECIES_SOLGALEO},
                                {EVO_LEVEL_NIGHT, 53, SPECIES_LUNALA}},
    [SPECIES_POIPOLE]	       = {{EVO_MOVE, MOVE_DRAGON_BREATH, SPECIES_NAGANADEL}},
    [SPECIES_MELTAN]	       = {{EVO_RARE_CANDY, 0, SPECIES_MELMETAL}},
    
    [SPECIES_ROSELIA]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_ROSERADE}},
    [SPECIES_MISDREAVUS]	   = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_ROSERADE}},
    [SPECIES_MURKROW]	       = {{EVO_ITEM, ITEM_MOON_STONE, SPECIES_HONCHKROW}},
    [SPECIES_TOGETIC]	       = {{EVO_ITEM, ITEM_SUN_STONE, SPECIES_TOGEKISS}},
    [SPECIES_SNEASEL]	       = {{EVO_HELD_ITEM_NIGHT, ITEM_QUICK_CLAW, SPECIES_WEAVILE}},
    [SPECIES_MAGNETON]	       = {{EVO_MAP, MAP_NEW_MAUVILLE_INSIDE, SPECIES_MAGNEZONE}},
    [SPECIES_LICKITUNG]	       = {{EVO_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY}},
    [SPECIES_RHYDON]	       = {{EVO_TRADE, 0, SPECIES_RHYPERIOR}},
    [SPECIES_TANGELA]	       = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH}},
    [SPECIES_ELECTABUZZ]	   = {{EVO_TRADE, 0, SPECIES_ELECTIVIRE}},
    [SPECIES_MAGMAR]	       = {{EVO_TRADE, 0, SPECIES_MAGMORTAR}},
    [SPECIES_YANMA]	           = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA}},
    [SPECIES_PILOSWINE]	       = {{EVO_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE}},
    [SPECIES_GLIGAR]	       = {{EVO_HELD_ITEM_NIGHT, ITEM_DRAGON_FANG, SPECIES_GLISCOR}},
    [SPECIES_NOSEPASS]	       = {{EVO_MAP, MAP_NEW_MAUVILLE_INSIDE, SPECIES_PROBOPASS}},
    [SPECIES_DUSCLOPS]	       = {{EVO_TRADE, 0, SPECIES_DUSKNOIR}},
    [SPECIES_PORYGON2]	       = {{EVO_TRADE, 0, SPECIES_PORYGON_Z}},
    [SPECIES_AIPOM]	           = {{EVO_MOVE, MOVE_FURY_SWIPES, SPECIES_AMBIPOM}},

};

#endif //POKERUBY_EVOLUTION_H
