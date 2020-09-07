#include "global.h"
#include "graphics.h"
#include "mail_data.h"
#include "constants/species.h"
#include "sprite.h"

#define POKE_ICON_BASE_PAL_TAG 56000

struct MonIconSpriteTemplate
{
    const struct OamData *oam;
    const u8 *image;
    const union AnimCmd *const *anims;
    const union AffineAnimCmd *const *affineAnims;
    void (*callback)(struct Sprite *);
    u16 paletteTag;
};

const u8 * const gMonIconTable[] =
{
    gMonIcon_Bulbasaur,
    gMonIcon_Bulbasaur,
    gMonIcon_Ivysaur,
    gMonIcon_Venusaur,
    gMonIcon_Charmander,
    gMonIcon_Charmeleon,
    gMonIcon_Charizard,
    gMonIcon_Squirtle,
    gMonIcon_Wartortle,
    gMonIcon_Blastoise,
    gMonIcon_Caterpie,
    gMonIcon_Metapod,
    gMonIcon_Butterfree,
    gMonIcon_Weedle,
    gMonIcon_Kakuna,
    gMonIcon_Beedrill,
    gMonIcon_Pidgey,
    gMonIcon_Pidgeotto,
    gMonIcon_Pidgeot,
    gMonIcon_Rattata,
    gMonIcon_Raticate,
    gMonIcon_Spearow,
    gMonIcon_Fearow,
    gMonIcon_Ekans,
    gMonIcon_Arbok,
    gMonIcon_Pikachu,
    gMonIcon_Raichu,
    gMonIcon_Sandshrew,
    gMonIcon_Sandslash,
    gMonIcon_NidoranF,
    gMonIcon_Nidorina,
    gMonIcon_Nidoqueen,
    gMonIcon_NidoranM,
    gMonIcon_Nidorino,
    gMonIcon_Nidoking,
    gMonIcon_Clefairy,
    gMonIcon_Clefable,
    gMonIcon_Vulpix,
    gMonIcon_Ninetales,
    gMonIcon_Jigglypuff,
    gMonIcon_Wigglytuff,
    gMonIcon_Zubat,
    gMonIcon_Golbat,
    gMonIcon_Oddish,
    gMonIcon_Gloom,
    gMonIcon_Vileplume,
    gMonIcon_Paras,
    gMonIcon_Parasect,
    gMonIcon_Venonat,
    gMonIcon_Venomoth,
    gMonIcon_Diglett,
    gMonIcon_Dugtrio,
    gMonIcon_Meowth,
    gMonIcon_Persian,
    gMonIcon_Psyduck,
    gMonIcon_Golduck,
    gMonIcon_Mankey,
    gMonIcon_Primeape,
    gMonIcon_Growlithe,
    gMonIcon_Arcanine,
    gMonIcon_Poliwag,
    gMonIcon_Poliwhirl,
    gMonIcon_Poliwrath,
    gMonIcon_Abra,
    gMonIcon_Kadabra,
    gMonIcon_Alakazam,
    gMonIcon_Machop,
    gMonIcon_Machoke,
    gMonIcon_Machamp,
    gMonIcon_Bellsprout,
    gMonIcon_Weepinbell,
    gMonIcon_Victreebel,
    gMonIcon_Tentacool,
    gMonIcon_Tentacruel,
    gMonIcon_Geodude,
    gMonIcon_Graveler,
    gMonIcon_Golem,
    gMonIcon_Ponyta,
    gMonIcon_Rapidash,
    gMonIcon_Slowpoke,
    gMonIcon_Slowbro,
    gMonIcon_Magnemite,
    gMonIcon_Magneton,
    gMonIcon_Farfetchd,
    gMonIcon_Doduo,
    gMonIcon_Dodrio,
    gMonIcon_Seel,
    gMonIcon_Dewgong,
    gMonIcon_Grimer,
    gMonIcon_Muk,
    gMonIcon_Shellder,
    gMonIcon_Cloyster,
    gMonIcon_Gastly,
    gMonIcon_Haunter,
    gMonIcon_Gengar,
    gMonIcon_Onix,
    gMonIcon_Drowzee,
    gMonIcon_Hypno,
    gMonIcon_Krabby,
    gMonIcon_Kingler,
    gMonIcon_Voltorb,
    gMonIcon_Electrode,
    gMonIcon_Exeggcute,
    gMonIcon_Exeggutor,
    gMonIcon_Cubone,
    gMonIcon_Marowak,
    gMonIcon_Hitmonlee,
    gMonIcon_Hitmonchan,
    gMonIcon_Lickitung,
    gMonIcon_Koffing,
    gMonIcon_Weezing,
    gMonIcon_Rhyhorn,
    gMonIcon_Rhydon,
    gMonIcon_Chansey,
    gMonIcon_Tangela,
    gMonIcon_Kangaskhan,
    gMonIcon_Horsea,
    gMonIcon_Seadra,
    gMonIcon_Goldeen,
    gMonIcon_Seaking,
    gMonIcon_Staryu,
    gMonIcon_Starmie,
    gMonIcon_Mrmime,
    gMonIcon_Scyther,
    gMonIcon_Jynx,
    gMonIcon_Electabuzz,
    gMonIcon_Magmar,
    gMonIcon_Pinsir,
    gMonIcon_Tauros,
    gMonIcon_Magikarp,
    gMonIcon_Gyarados,
    gMonIcon_Lapras,
    gMonIcon_Ditto,
    gMonIcon_Eevee,
    gMonIcon_Vaporeon,
    gMonIcon_Jolteon,
    gMonIcon_Flareon,
    gMonIcon_Porygon,
    gMonIcon_Omanyte,
    gMonIcon_Omastar,
    gMonIcon_Kabuto,
    gMonIcon_Kabutops,
    gMonIcon_Aerodactyl,
    gMonIcon_Snorlax,
    gMonIcon_Articuno,
    gMonIcon_Zapdos,
    gMonIcon_Moltres,
    gMonIcon_Dratini,
    gMonIcon_Dragonair,
    gMonIcon_Dragonite,
    gMonIcon_Mewtwo,
    gMonIcon_Mew,
    gMonIcon_Chikorita,
    gMonIcon_Bayleef,
    gMonIcon_Meganium,
    gMonIcon_Cyndaquil,
    gMonIcon_Quilava,
    gMonIcon_Typhlosion,
    gMonIcon_Totodile,
    gMonIcon_Croconaw,
    gMonIcon_Feraligatr,
    gMonIcon_Sentret,
    gMonIcon_Furret,
    gMonIcon_Hoothoot,
    gMonIcon_Noctowl,
    gMonIcon_Ledyba,
    gMonIcon_Ledian,
    gMonIcon_Spinarak,
    gMonIcon_Ariados,
    gMonIcon_Crobat,
    gMonIcon_Chinchou,
    gMonIcon_Lanturn,
    gMonIcon_Pichu,
    gMonIcon_Cleffa,
    gMonIcon_Igglybuff,
    gMonIcon_Togepi,
    gMonIcon_Togetic,
    gMonIcon_Natu,
    gMonIcon_Xatu,
    gMonIcon_Mareep,
    gMonIcon_Flaaffy,
    gMonIcon_Ampharos,
    gMonIcon_Bellossom,
    gMonIcon_Marill,
    gMonIcon_Azumarill,
    gMonIcon_Sudowoodo,
    gMonIcon_Politoed,
    gMonIcon_Hoppip,
    gMonIcon_Skiploom,
    gMonIcon_Jumpluff,
    gMonIcon_Aipom,
    gMonIcon_Sunkern,
    gMonIcon_Sunflora,
    gMonIcon_Yanma,
    gMonIcon_Wooper,
    gMonIcon_Quagsire,
    gMonIcon_Espeon,
    gMonIcon_Umbreon,
    gMonIcon_Murkrow,
    gMonIcon_Slowking,
    gMonIcon_Misdreavus,
    gMonIcon_UnownA,
    gMonIcon_Wobbuffet,
    gMonIcon_Girafarig,
    gMonIcon_Pineco,
    gMonIcon_Forretress,
    gMonIcon_Dunsparce,
    gMonIcon_Gligar,
    gMonIcon_Steelix,
    gMonIcon_Snubbull,
    gMonIcon_Granbull,
    gMonIcon_Qwilfish,
    gMonIcon_Scizor,
    gMonIcon_Shuckle,
    gMonIcon_Heracross,
    gMonIcon_Sneasel,
    gMonIcon_Teddiursa,
    gMonIcon_Ursaring,
    gMonIcon_Slugma,
    gMonIcon_Magcargo,
    gMonIcon_Swinub,
    gMonIcon_Piloswine,
    gMonIcon_Corsola,
    gMonIcon_Remoraid,
    gMonIcon_Octillery,
    gMonIcon_Delibird,
    gMonIcon_Mantine,
    gMonIcon_Skarmory,
    gMonIcon_Houndour,
    gMonIcon_Houndoom,
    gMonIcon_Kingdra,
    gMonIcon_Phanpy,
    gMonIcon_Donphan,
    gMonIcon_Porygon2,
    gMonIcon_Stantler,
    gMonIcon_Smeargle,
    gMonIcon_Tyrogue,
    gMonIcon_Hitmontop,
    gMonIcon_Smoochum,
    gMonIcon_Elekid,
    gMonIcon_Magby,
    gMonIcon_Miltank,
    gMonIcon_Blissey,
    gMonIcon_Raikou,
    gMonIcon_Entei,
    gMonIcon_Suicune,
    gMonIcon_Larvitar,
    gMonIcon_Pupitar,
    gMonIcon_Tyranitar,
    gMonIcon_Lugia,
    gMonIcon_HoOh,
    gMonIcon_Celebi,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_QuestionMark,
    gMonIcon_Treecko,
    gMonIcon_Grovyle,
    gMonIcon_Sceptile,
    gMonIcon_Torchic,
    gMonIcon_Combusken,
    gMonIcon_Blaziken,
    gMonIcon_Mudkip,
    gMonIcon_Marshtomp,
    gMonIcon_Swampert,
    gMonIcon_Poochyena,
    gMonIcon_Mightyena,
    gMonIcon_Zigzagoon,
    gMonIcon_Linoone,
    gMonIcon_Wurmple,
    gMonIcon_Silcoon,
    gMonIcon_Beautifly,
    gMonIcon_Cascoon,
    gMonIcon_Dustox,
    gMonIcon_Lotad,
    gMonIcon_Lombre,
    gMonIcon_Ludicolo,
    gMonIcon_Seedot,
    gMonIcon_Nuzleaf,
    gMonIcon_Shiftry,
    gMonIcon_Nincada,
    gMonIcon_Ninjask,
    gMonIcon_Shedinja,
    gMonIcon_Taillow,
    gMonIcon_Swellow,
    gMonIcon_Shroomish,
    gMonIcon_Breloom,
    gMonIcon_Spinda,
    gMonIcon_Wingull,
    gMonIcon_Pelipper,
    gMonIcon_Surskit,
    gMonIcon_Masquerain,
    gMonIcon_Wailmer,
    gMonIcon_Wailord,
    gMonIcon_Skitty,
    gMonIcon_Delcatty,
    gMonIcon_Kecleon,
    gMonIcon_Baltoy,
    gMonIcon_Claydol,
    gMonIcon_Nosepass,
    gMonIcon_Torkoal,
    gMonIcon_Sableye,
    gMonIcon_Barboach,
    gMonIcon_Whiscash,
    gMonIcon_Luvdisc,
    gMonIcon_Corphish,
    gMonIcon_Crawdaunt,
    gMonIcon_Feebas,
    gMonIcon_Milotic,
    gMonIcon_Carvanha,
    gMonIcon_Sharpedo,
    gMonIcon_Trapinch,
    gMonIcon_Vibrava,
    gMonIcon_Flygon,
    gMonIcon_Makuhita,
    gMonIcon_Hariyama,
    gMonIcon_Electrike,
    gMonIcon_Manectric,
    gMonIcon_Numel,
    gMonIcon_Camerupt,
    gMonIcon_Spheal,
    gMonIcon_Sealeo,
    gMonIcon_Walrein,
    gMonIcon_Cacnea,
    gMonIcon_Cacturne,
    gMonIcon_Snorunt,
    gMonIcon_Glalie,
    gMonIcon_Lunatone,
    gMonIcon_Solrock,
    gMonIcon_Azurill,
    gMonIcon_Spoink,
    gMonIcon_Grumpig,
    gMonIcon_Plusle,
    gMonIcon_Minun,
    gMonIcon_Mawile,
    gMonIcon_Meditite,
    gMonIcon_Medicham,
    gMonIcon_Swablu,
    gMonIcon_Altaria,
    gMonIcon_Wynaut,
    gMonIcon_Duskull,
    gMonIcon_Dusclops,
    gMonIcon_Roselia,
    gMonIcon_Slakoth,
    gMonIcon_Vigoroth,
    gMonIcon_Slaking,
    gMonIcon_Gulpin,
    gMonIcon_Swalot,
    gMonIcon_Tropius,
    gMonIcon_Whismur,
    gMonIcon_Loudred,
    gMonIcon_Exploud,
    gMonIcon_Clamperl,
    gMonIcon_Huntail,
    gMonIcon_Gorebyss,
    gMonIcon_Absol,
    gMonIcon_Shuppet,
    gMonIcon_Banette,
    gMonIcon_Seviper,
    gMonIcon_Zangoose,
    gMonIcon_Relicanth,
    gMonIcon_Aron,
    gMonIcon_Lairon,
    gMonIcon_Aggron,
    gMonIcon_Castform,
    gMonIcon_Volbeat,
    gMonIcon_Illumise,
    gMonIcon_Lileep,
    gMonIcon_Cradily,
    gMonIcon_Anorith,
    gMonIcon_Armaldo,
    gMonIcon_Ralts,
    gMonIcon_Kirlia,
    gMonIcon_Gardevoir,
    gMonIcon_Bagon,
    gMonIcon_Shelgon,
    gMonIcon_Salamence,
    gMonIcon_Beldum,
    gMonIcon_Metang,
    gMonIcon_Metagross,
    gMonIcon_Regirock,
    gMonIcon_Regice,
    gMonIcon_Registeel,
    gMonIcon_Kyogre,
    gMonIcon_Groudon,
    gMonIcon_Rayquaza,
    gMonIcon_Latias,
    gMonIcon_Latios,
    gMonIcon_Jirachi,
    gMonIcon_Deoxys,
    gMonIcon_Chimecho,
    gMonIcon_Turtwig,
    gMonIcon_Grotle,
    gMonIcon_Torterra,
    gMonIcon_Chimchar,
    gMonIcon_Monferno,
    gMonIcon_Infernape,
    gMonIcon_Piplup,
    gMonIcon_Prinplup,
    gMonIcon_Empoleon,
    gMonIcon_Starly,
    gMonIcon_Staravia,
    gMonIcon_Staraptor,
    gMonIcon_Bidoof,
    gMonIcon_Bibarel,
    gMonIcon_Kricketot,
    gMonIcon_Kricketune,
    gMonIcon_Shinx,
    gMonIcon_Luxio,
    gMonIcon_Luxray,
    gMonIcon_Budew,
    gMonIcon_Roserade,
    gMonIcon_Cranidos,
    gMonIcon_Rampardos,
    gMonIcon_Shieldon,
    gMonIcon_Bastiodon,
    gMonIcon_Burmy,
    gMonIcon_Wormadam,
    gMonIcon_Mothim,
    gMonIcon_Combee,
    gMonIcon_Vespiquen,
    gMonIcon_Pachirisu,
    gMonIcon_Buizel,
    gMonIcon_Floatzel,
    gMonIcon_Cherubi,
    gMonIcon_Cherrim,
    gMonIcon_Shellos,
    gMonIcon_Gastrodon,
    gMonIcon_Ambipom,
    gMonIcon_Drifloon,
    gMonIcon_Drifblim,
    gMonIcon_Buneary,
    gMonIcon_Lopunny,
    gMonIcon_Mismagius,
    gMonIcon_Honchkrow,
    gMonIcon_Glameow,
    gMonIcon_Purugly,
    gMonIcon_Chingling,
    gMonIcon_Stunky,
    gMonIcon_Skuntank,
    gMonIcon_Bronzor,
    gMonIcon_Bronzong,
    gMonIcon_Bonsly,
    gMonIcon_Mime_Jr,
    gMonIcon_Happiny,
    gMonIcon_Chatot,
    gMonIcon_Spiritomb,
    gMonIcon_Gible,
    gMonIcon_Gabite,
    gMonIcon_Garchomp,
    gMonIcon_Munchlax,
    gMonIcon_Riolu,
    gMonIcon_Lucario,
    gMonIcon_Hippopotas,
    gMonIcon_Hippowdon,
    gMonIcon_Skorupi,
    gMonIcon_Drapion,
    gMonIcon_Croagunk,
    gMonIcon_Toxicroak,
    gMonIcon_Carnivine,
    gMonIcon_Finneon,
    gMonIcon_Lumineon,
    gMonIcon_Mantyke,
    gMonIcon_Snover,
    gMonIcon_Abomasnow,
    gMonIcon_Weavile,
    gMonIcon_Magnezone,
    gMonIcon_Lickilicky,
    gMonIcon_Rhyperior,
    gMonIcon_Tangrowth,
    gMonIcon_Electivire,
    gMonIcon_Magmortar,
    gMonIcon_Togekiss,
    gMonIcon_Yanmega,
    gMonIcon_Leafeon,
    gMonIcon_Glaceon,
    gMonIcon_Gliscor,
    gMonIcon_Mamoswine,
    gMonIcon_Porygon_Z,
    gMonIcon_Gallade,
    gMonIcon_Probopass,
    gMonIcon_Dusknoir,
    gMonIcon_Froslass,
    gMonIcon_Rotom,
    gMonIcon_Uxie,
    gMonIcon_Mesprit,
    gMonIcon_Azelf,
    gMonIcon_Dialga,
    gMonIcon_Palkia,
    gMonIcon_Heatran,
    gMonIcon_Regigigas,
    gMonIcon_Giratina,
    gMonIcon_Cresselia,
    gMonIcon_Phione,
    gMonIcon_Manaphy,
    gMonIcon_Darkrai,
    gMonIcon_Shaymin,
    gMonIcon_Arceus,
    gMonIcon_Victini,
    gMonIcon_Snivy,
    gMonIcon_Servine,
    gMonIcon_Serperior,
    gMonIcon_Tepig,
    gMonIcon_Pignite,
    gMonIcon_Emboar,
    gMonIcon_Oshawott,
    gMonIcon_Dewott,
    gMonIcon_Samurott,
    gMonIcon_Patrat,
    gMonIcon_Watchog,
    gMonIcon_Lillipup,
    gMonIcon_Herdier,
    gMonIcon_Stoutland,
    gMonIcon_Purrloin,
    gMonIcon_Liepard,
    gMonIcon_Pansage,
    gMonIcon_Simisage,
    gMonIcon_Pansear,
    gMonIcon_Simisear,
    gMonIcon_Panpour,
    gMonIcon_Simipour,
    gMonIcon_Munna,
    gMonIcon_Musharna,
    gMonIcon_Pidove,
    gMonIcon_Tranquill,
    gMonIcon_Unfezant,
    gMonIcon_Blitzle,
    gMonIcon_Zebstrika,
    gMonIcon_Roggenrola,
    gMonIcon_Boldore,
    gMonIcon_Gigalith,
    gMonIcon_Woobat,
    gMonIcon_Swoobat,
    gMonIcon_Drilbur,
    gMonIcon_Excadrill,
    gMonIcon_Audino,
    gMonIcon_Timburr,
    gMonIcon_Gurdurr,
    gMonIcon_Conkeldurr,
    gMonIcon_Tympole,
    gMonIcon_Palpitoad,
    gMonIcon_Seismitoad,
    gMonIcon_Throh,
    gMonIcon_Sawk,
    gMonIcon_Sewaddle,
    gMonIcon_Swadloon,
    gMonIcon_Leavanny,
    gMonIcon_Venipede,
    gMonIcon_Whirlipede,
    gMonIcon_Scolipede,
    gMonIcon_Cottonee,
    gMonIcon_Whimsicott,
    gMonIcon_Petilil,
    gMonIcon_Lilligant,
    gMonIcon_Basculin,
    gMonIcon_Sandile,
    gMonIcon_Krokorok,
    gMonIcon_Krookodile,
    gMonIcon_Darumaka,
    gMonIcon_Darmanitan,
    gMonIcon_Maractus,
    gMonIcon_Dwebble,
    gMonIcon_Crustle,
    gMonIcon_Scraggy,
    gMonIcon_Scrafty,
    gMonIcon_Sigilyph,
    gMonIcon_Yamask,
    gMonIcon_Cofagrigus,
    gMonIcon_Tirtouga,
    gMonIcon_Carracosta,
    gMonIcon_Archen,
    gMonIcon_Archeops,
    gMonIcon_Trubbish,
    gMonIcon_Garbodor,
    gMonIcon_Zorua,
    gMonIcon_Zoroark,
    gMonIcon_Minccino,
    gMonIcon_Cinccino,
    gMonIcon_Gothita,
    gMonIcon_Gothorita,
    gMonIcon_Gothitelle,
    gMonIcon_Solosis,
    gMonIcon_Duosion,
    gMonIcon_Reuniclus,
    gMonIcon_Ducklett,
    gMonIcon_Swanna,
    gMonIcon_Vanillite,
    gMonIcon_Vanillish,
    gMonIcon_Vanilluxe,
    gMonIcon_Deerling,
    gMonIcon_Sawsbuck,
    gMonIcon_Emolga,
    gMonIcon_Karrablast,
    gMonIcon_Escavalier,
    gMonIcon_Foongus,
    gMonIcon_Amoonguss,
    gMonIcon_Frillish,
    gMonIcon_Jellicent,
    gMonIcon_Alomomola,
    gMonIcon_Joltik,
    gMonIcon_Galvantula,
    gMonIcon_Ferroseed,
    gMonIcon_Ferrothorn,
    gMonIcon_Klink,
    gMonIcon_Klang,
    gMonIcon_Klinklang,
    gMonIcon_Tynamo,
    gMonIcon_Eelektrik,
    gMonIcon_Eelektross,
    gMonIcon_Elgyem,
    gMonIcon_Beheeyem,
    gMonIcon_Litwick,
    gMonIcon_Lampent,
    gMonIcon_Chandelure,
    gMonIcon_Axew,
    gMonIcon_Fraxure,
    gMonIcon_Haxorus,
    gMonIcon_Cubchoo,
    gMonIcon_Beartic,
    gMonIcon_Cryogonal,
    gMonIcon_Shelmet,
    gMonIcon_Accelgor,
    gMonIcon_Stunfisk,
    gMonIcon_Mienfoo,
    gMonIcon_Mienshao,
    gMonIcon_Druddigon,
    gMonIcon_Golett,
    gMonIcon_Golurk,
    gMonIcon_Pawniard,
    gMonIcon_Bisharp,
    gMonIcon_Bouffalant,
    gMonIcon_Rufflet,
    gMonIcon_Braviary,
    gMonIcon_Vullaby,
    gMonIcon_Mandibuzz,
    gMonIcon_Heatmor,
    gMonIcon_Durant,
    gMonIcon_Deino,
    gMonIcon_Zweilous,
    gMonIcon_Hydreigon,
    gMonIcon_Larvesta,
    gMonIcon_Volcarona,
    gMonIcon_Cobalion,
    gMonIcon_Terrakion,
    gMonIcon_Virizion,
    gMonIcon_Tornadus,
    gMonIcon_Thundurus,
    gMonIcon_Reshiram,
    gMonIcon_Zekrom,
    gMonIcon_Landorus,
    gMonIcon_Kyurem,
    gMonIcon_Keldeo,
    gMonIcon_Meloetta,
    gMonIcon_Genesect,
    gMonIcon_Chespin,
    gMonIcon_Quilladin,
    gMonIcon_Chesnaught,
    gMonIcon_Fennekin,
    gMonIcon_Braixen,
    gMonIcon_Delphox,
    gMonIcon_Froakie,
    gMonIcon_Frogadier,
    gMonIcon_Greninja,
    gMonIcon_Bunnelby,
    gMonIcon_Diggersby,
    gMonIcon_Fletchling,
    gMonIcon_Fletchinder,
    gMonIcon_Talonflame,
    gMonIcon_Scatterbug,
    gMonIcon_Spewpa,
    gMonIcon_Vivillon,
    gMonIcon_Litleo,
    gMonIcon_Pyroar,
    gMonIcon_Flabebe,
    gMonIcon_Floette,
    gMonIcon_Florges,
    gMonIcon_Skiddo,
    gMonIcon_Gogoat,
    gMonIcon_Pancham,
    gMonIcon_Pangoro,
    gMonIcon_Furfrou,
    gMonIcon_Espurr,
    gMonIcon_Meowstic,
    gMonIcon_Honedge,
    gMonIcon_Doublade,
    gMonIcon_Aegislash,
    gMonIcon_Spritzee,
    gMonIcon_Aromatisse,
    gMonIcon_Swirlix,
    gMonIcon_Slurpuff,
    gMonIcon_Inkay,
    gMonIcon_Malamar,
    gMonIcon_Binacle,
    gMonIcon_Barbaracle,
    gMonIcon_Skrelp,
    gMonIcon_Dragalge,
    gMonIcon_Clauncher,
    gMonIcon_Clawitzer,
    gMonIcon_Helioptile,
    gMonIcon_Heliolisk,
    gMonIcon_Tyrunt,
    gMonIcon_Tyrantrum,
    gMonIcon_Amaura,
    gMonIcon_Aurorus,
    gMonIcon_Sylveon,
    gMonIcon_Hawlucha,
    gMonIcon_Dedenne,
    gMonIcon_Carbink,
    gMonIcon_Goomy,
    gMonIcon_Sliggoo,
    gMonIcon_Goodra,
    gMonIcon_Klefki,
    gMonIcon_Phantump,
    gMonIcon_Trevenant,
    gMonIcon_Pumpkaboo,
    gMonIcon_Gourgeist,
    gMonIcon_Bergmite,
    gMonIcon_Avalugg,
    gMonIcon_Noibat,
    gMonIcon_Noivern,
    gMonIcon_Xerneas,
    gMonIcon_Yveltal,
    gMonIcon_Zygarde,
    gMonIcon_Diancie,
    gMonIcon_Hoopa,
    gMonIcon_Volcanion,
    gMonIcon_Rowlet,
    gMonIcon_Dartrix,
    gMonIcon_Decidueye,
    gMonIcon_Litten,
    gMonIcon_Torracat,
    gMonIcon_Incineroar,
    gMonIcon_Popplio,
    gMonIcon_Brionne,
    gMonIcon_Primarina,
    gMonIcon_Pikipek,
    gMonIcon_Trumbeak,
    gMonIcon_Toucannon,
    gMonIcon_Yungoos,
    gMonIcon_Gumshoos,
    gMonIcon_Grubbin,
    gMonIcon_Charjabug,
    gMonIcon_Vikavolt,
    gMonIcon_Crabrawler,
    gMonIcon_Crabominable,
    gMonIcon_Oricorio,
    gMonIcon_Cutiefly,
    gMonIcon_Ribombee,
    gMonIcon_Rockruff,
    gMonIcon_Lycanroc,
    gMonIcon_Wishiwashi,
    gMonIcon_Mareanie,
    gMonIcon_Toxapex,
    gMonIcon_Mudbray,
    gMonIcon_Mudsdale,
    gMonIcon_Dewpider,
    gMonIcon_Araquanid,
    gMonIcon_Fomantis,
    gMonIcon_Lurantis,
    gMonIcon_Morelull,
    gMonIcon_Shiinotic,
    gMonIcon_Salandit,
    gMonIcon_Salazzle,
    gMonIcon_Stufful,
    gMonIcon_Bewear,
    gMonIcon_Bounsweet,
    gMonIcon_Steenee,
    gMonIcon_Tsareena,
    gMonIcon_Comfey,
    gMonIcon_Oranguru,
    gMonIcon_Passimian,
    gMonIcon_Wimpod,
    gMonIcon_Golisopod,
    gMonIcon_Sandygast,
    gMonIcon_Palossand,
    gMonIcon_Pyukumuku,
    gMonIcon_Type_Null,
    gMonIcon_Silvally,
    gMonIcon_Minior,
    gMonIcon_Komala,
    gMonIcon_Turtonator,
    gMonIcon_Togedemaru,
    gMonIcon_Mimikyu,
    gMonIcon_Bruxish,
    gMonIcon_Drampa,
    gMonIcon_Dhelmise,
    gMonIcon_Jangmo_O,
    gMonIcon_Hakamo_O,
    gMonIcon_Kommo_O,
    gMonIcon_Tapu_Koko,
    gMonIcon_Tapu_Lele,
    gMonIcon_Tapu_Bulu,
    gMonIcon_Tapu_Fini,
    gMonIcon_Cosmog,
    gMonIcon_Cosmoem,
    gMonIcon_Solgaleo,
    gMonIcon_Lunala,
    gMonIcon_Nihilego,
    gMonIcon_Buzzwole,
    gMonIcon_Pheromosa,
    gMonIcon_Xurkitree,
    gMonIcon_Celesteela,
    gMonIcon_Kartana,
    gMonIcon_Guzzlord,
    gMonIcon_Necrozma,
    gMonIcon_Magearna,
    gMonIcon_Marshadow,
    gMonIcon_Poipole,
    gMonIcon_Naganadel,
    gMonIcon_Stakataka,
    gMonIcon_Blacephalon,
    gMonIcon_Zeraora,
    gMonIcon_Meltan,
    gMonIcon_Melmetal,
    gMonIcon_Egg,
    gMonIcon_UnownB,
    gMonIcon_UnownC,
    gMonIcon_UnownD,
    gMonIcon_UnownE,
    gMonIcon_UnownF,
    gMonIcon_UnownG,
    gMonIcon_UnownH,
    gMonIcon_UnownI,
    gMonIcon_UnownJ,
    gMonIcon_UnownK,
    gMonIcon_UnownL,
    gMonIcon_UnownM,
    gMonIcon_UnownN,
    gMonIcon_UnownO,
    gMonIcon_UnownP,
    gMonIcon_UnownQ,
    gMonIcon_UnownR,
    gMonIcon_UnownS,
    gMonIcon_UnownT,
    gMonIcon_UnownU,
    gMonIcon_UnownV,
    gMonIcon_UnownW,
    gMonIcon_UnownX,
    gMonIcon_UnownY,
    gMonIcon_UnownZ,
    gMonIcon_UnownExclamationMark,
    gMonIcon_UnownQuestionMark,
};

const u8 gMonIconPaletteIndices[] =
{
    0, // ??????????
    1, // Bulbasaur
    1, // Ivysaur
    1, // Venusaur
    0, // Charmander
    0, // Charmeleon
    0, // Charizard
    0, // Squirtle
    2, // Wartortle
    2, // Blastoise
    1, // Caterpie
    1, // Metapod
    0, // Butterfree
    1, // Weedle
    2, // Kakuna
    2, // Beedrill
    0, // Pidgey
    0, // Pidgeotto
    0, // Pidgeot
    2, // Rattata
    1, // Raticate
    0, // Spearow
    0, // Fearow
    2, // Ekans
    2, // Arbok
    2, // Pikachu
    0, // Raichu
    2, // Sandshrew
    2, // Sandslash
    2, // Nidoran♀
    2, // Nidorina
    2, // Nidoqueen
    2, // Nidoran♂
    2, // Nidorino
    2, // Nidoking
    0, // Clefairy
    0, // Clefable
    2, // Vulpix
    1, // Ninetales
    0, // Jigglypuff
    0, // Wigglytuff
    2, // Zubat
    2, // Golbat
    1, // Oddish
    0, // Gloom
    0, // Vileplume
    0, // Paras
    0, // Parasect
    0, // Venonat
    2, // Venomoth
    2, // Diglett
    2, // Dugtrio
    1, // Meowth
    1, // Persian
    1, // Psyduck
    2, // Golduck
    1, // Mankey
    2, // Primeape
    0, // Growlithe
    0, // Arcanine
    0, // Poliwag
    0, // Poliwhirl
    0, // Poliwrath
    2, // Abra
    2, // Kadabra
    2, // Alakazam
    0, // Machop
    2, // Machoke
    0, // Machamp
    1, // Bellsprout
    1, // Weepinbell
    1, // Victreebel
    2, // Tentacool
    2, // Tentacruel
    1, // Geodude
    1, // Graveler
    1, // Golem
    0, // Ponyta
    0, // Rapidash
    0, // Slowpoke
    0, // Slowbro
    0, // Magnemite
    0, // Magneton
    1, // Farfetch'd
    2, // Doduo
    2, // Dodrio
    2, // Seel
    2, // Dewgong
    2, // Grimer
    2, // Muk
    2, // Shellder
    2, // Cloyster
    2, // Gastly
    2, // Haunter
    2, // Gengar
    2, // Onix
    2, // Drowzee
    1, // Hypno
    2, // Krabby
    2, // Kingler
    0, // Voltorb
    0, // Electrode
    0, // Exeggcute
    1, // Exeggutor
    1, // Cubone
    1, // Marowak
    2, // Hitmonlee
    2, // Hitmonchan
    1, // Lickitung
    2, // Koffing
    2, // Weezing
    1, // Rhyhorn
    1, // Rhydon
    0, // Chansey
    0, // Tangela
    1, // Kangaskhan
    0, // Horsea
    0, // Seadra
    0, // Goldeen
    0, // Seaking
    2, // Staryu
    2, // Starmie
    0, // Mr. mime
    1, // Scyther
    2, // Jynx
    1, // Electabuzz
    0, // Magmar
    2, // Pinsir
    2, // Tauros
    0, // Magikarp
    0, // Gyarados
    2, // Lapras
    2, // Ditto
    2, // Eevee
    0, // Vaporeon
    0, // Jolteon
    0, // Flareon
    0, // Porygon
    0, // Omanyte
    0, // Omastar
    2, // Kabuto
    2, // Kabutops
    0, // Aerodactyl
    1, // Snorlax
    0, // Articuno
    0, // Zapdos
    0, // Moltres
    0, // Dratini
    0, // Dragonair
    2, // Dragonite
    2, // Mewtwo
    0, // Mew
    1, // Chikorita
    1, // Bayleef
    1, // Meganium
    1, // Cyndaquil
    1, // Quilava
    1, // Typhlosion
    2, // Totodile
    2, // Croconaw
    2, // Feraligatr
    2, // Sentret
    2, // Furret
    2, // Hoothoot
    2, // Noctowl
    0, // Ledyba
    0, // Ledian
    1, // Spinarak
    0, // Ariados
    2, // Crobat
    2, // Chinchou
    0, // Lanturn
    0, // Pichu
    0, // Cleffa
    1, // Igglybuff
    2, // Togepi
    2, // Togetic
    0, // Natu
    0, // Xatu
    2, // Mareep
    0, // Flaaffy
    0, // Ampharos
    1, // Bellossom
    2, // Marill
    2, // Azumarill
    1, // Sudowoodo
    1, // Politoed
    1, // Hoppip
    1, // Skiploom
    2, // Jumpluff
    2, // Aipom
    1, // Sunkern
    1, // Sunflora
    1, // Yanma
    0, // Wooper
    0, // Quagsire
    2, // Espeon
    2, // Umbreon
    2, // Murkrow
    0, // Slowking
    0, // Misdreavus
    0, // Unown A
    0, // Wobbuffet
    1, // Girafarig
    0, // Pineco
    2, // Forretress
    2, // Dunsparce
    2, // Gligar
    0, // Steelix
    0, // Snubbull
    2, // Granbull
    0, // Qwilfish
    0, // Scizor
    1, // Shuckle
    2, // Heracross
    0, // Sneasel
    0, // Teddiursa
    2, // Ursaring
    0, // Slugma
    0, // Magcargo
    2, // Swinub
    2, // Piloswine
    0, // Corsola
    0, // Remoraid
    0, // Octillery
    0, // Delibird
    2, // Mantine
    0, // Skarmory
    0, // Houndour
    0, // Houndoom
    0, // Kingdra
    0, // Phanpy
    0, // Donphan
    0, // Porygon2
    2, // Stantler
    1, // Smeargle
    2, // Tyrogue
    2, // Hitmontop
    1, // Smoochum
    1, // Elekid
    1, // Magby
    1, // Miltank
    1, // Blissey
    0, // Raikou
    2, // Entei
    0, // Suicune
    1, // Larvitar
    0, // Pupitar
    1, // Tyranitar
    0, // Lugia
    1, // Ho-Oh
    1, // Celebi
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    0, // ?
    1, // Treecko
    0, // Grovyle
    1, // Sceptile
    0, // Torchic
    0, // Combusken
    0, // Blaziken
    0, // Mudkip
    0, // Marshtomp
    0, // Swampert
    2, // Poochyena
    2, // Mightyena
    2, // Zigzagoon
    2, // Linoone
    0, // Wurmple
    2, // Silcoon
    0, // Beautifly
    2, // Cascoon
    1, // Dustox
    1, // Lotad
    1, // Lombre
    1, // Ludicolo
    1, // Seedot
    1, // Nuzleaf
    0, // Shiftry
    1, // Nincada
    1, // Ninjask
    1, // Shedinja
    2, // Taillow
    2, // Swellow
    1, // Shroomish
    1, // Breloom
    1, // Spinda
    0, // Wingull
    0, // Pelipper
    2, // Surskit
    0, // Masquerain
    2, // Wailmer
    0, // Wailord
    0, // Skitty
    2, // Delcatty
    1, // Kecleon
    1, // Baltoy
    0, // Claydol
    0, // Nosepass
    1, // Torkoal
    2, // Sableye
    0, // Barboach
    0, // Whiscash
    0, // Luvdisc
    0, // Corphish
    0, // Crawdaunt
    2, // Feebas
    0, // Milotic
    0, // Carvanha
    0, // Sharpedo
    1, // Trapinch
    1, // Vibrava
    1, // Flygon
    2, // Makuhita
    1, // Hariyama
    1, // Electrike
    0, // Manectric
    1, // Numel
    0, // Camerupt
    2, // Spheal
    2, // Sealeo
    0, // Walrein
    1, // Cacnea
    1, // Cacturne
    2, // Snorunt
    0, // Glalie
    1, // Lunatone
    0, // Solrock
    2, // Azurill
    0, // Spoink
    2, // Grumpig
    0, // Plusle
    0, // Minun
    2, // Mawile
    0, // Meditite
    0, // Medicham
    0, // Swablu
    0, // Altaria
    0, // Wynaut
    0, // Duskull
    0, // Dusclops
    0, // Roselia
    2, // Slakoth
    2, // Vigoroth
    1, // Slaking
    1, // Gulpin
    2, // Swalot
    1, // Tropius
    0, // Whismur
    2, // Loudred
    2, // Exploud
    0, // Clamperl
    0, // Huntail
    0, // Gorebyss
    0, // Absol
    0, // Shuppet
    0, // Banette
    2, // Seviper
    0, // Zangoose
    1, // Relicanth
    2, // Aron
    2, // Lairon
    2, // Aggron
    0, // Castform
    0, // Volbeat
    2, // Illumise
    2, // Lileep
    0, // Cradily
    0, // Anorith
    0, // Armaldo
    1, // Ralts
    1, // Kirlia
    1, // Gardevoir
    2, // Bagon
    2, // Shelgon
    0, // Salamence
    0, // Beldum
    0, // Metang
    0, // Metagross
    2, // Regirock
    2, // Regice
    2, // Registeel
    2, // Kyogre
    0, // Groudon
    1, // Rayquaza
    0, // Latias
    2, // Latios
    0, // Jirachi
    0, // Deoxys
    0, // Chimecho
    1, //SPECIES_TURTWIG
    1, //SPECIES_GROTLE
    1, //SPECIES_TORTERRA
    1, //SPECIES_CHIMCHAR
    0, //SPECIES_MONFERNO
    0, //SPECIES_INFERNAPE
    0, //SPECIES_PIPLUP
    0, //SPECIES_PRINPLUP
    0, //SPECIES_EMPOLEON
    0, //SPECIES_STARLY
    0, //SPECIES_STARAVIA
    0, //SPECIES_STARAPTOR
    2, //SPECIES_BIDOOF
    2, //SPECIES_BIBAREL
    2, //SPECIES_KRICKETOT
    2, //SPECIES_KRICKETUNE
    0, //SPECIES_SHINX
    0, //SPECIES_LUXIO
    0, //SPECIES_LUXRAY
    1, //SPECIES_BUDEW
    0, //SPECIES_ROSERADE
    0, //SPECIES_CRANIDOS
    0, //SPECIES_RAMPARDOS
    1, //SPECIES_SHIELDON
    1, //SPECIES_BASTIODON
    1, //SPECIES_BURMY
    1, //SPECIES_WORMADAM
    0, //SPECIES_MOTHIM
    0, //SPECIES_COMBEE
    0, //SPECIES_VESPIQUEN
    0, //SPECIES_PACHIRISU
    0, //SPECIES_BUIZEL
    0, //SPECIES_FLOATZEL
    1, //SPECIES_CHERUBI
    0, //SPECIES_CHERRIM
    0, //SPECIES_SHELLOS
    0, //SPECIES_GASTRODON
    2, //SPECIES_AMBIPOM
    2, //SPECIES_DRIFLOON
    2, //SPECIES_DRIFBLIM
    2, //SPECIES_BUNEARY
    2, //SPECIES_LOPUNNY
    2, //SPECIES_MISMAGIUS
    2, //SPECIES_HONCHKROW
    0, //SPECIES_GLAMEOW
    0, //SPECIES_PURUGLY
    1, //SPECIES_CHINGLING
    2, //SPECIES_STUNKY
    2, //SPECIES_SKUNTANK
    0, //SPECIES_BRONZOR
    0, //SPECIES_BRONZONG
    1, //SPECIES_BONSLY
    0, //SPECIES_MIME_JR
    0, //SPECIES_HAPPINY
    0, //SPECIES_CHATOT
    5, //SPECIES_SPIRITOMB
    0, //SPECIES_GIBLE
    0, //SPECIES_GABITE
    0, //SPECIES_GARCHOMP
    3, //SPECIES_MUNCHLAX
    2, //SPECIES_RIOLU
    2, //SPECIES_LUCARIO
    1, //SPECIES_HIPPOPOTAS
    1, //SPECIES_HIPPOWDON
    0, //SPECIES_SKORUPI
    2, //SPECIES_DRAPION
    0, //SPECIES_CROAGUNK
    0, //SPECIES_TOXICROAK
    1, //SPECIES_CARNIVINE
    0, //SPECIES_FINNEON
    0, //SPECIES_LUMINEON
    0, //SPECIES_MANTYKE
    1, //SPECIES_SNOVER
    1, //SPECIES_ABOMASNOW
    0, //SPECIES_WEAVILE
    0, //SPECIES_MAGNEZONE
    1, //SPECIES_LICKILICKY
    0, //SPECIES_RHYPERIOR
    0, //SPECIES_TANGROWTH
    1, //SPECIES_ELECTIVIRE
    0, //SPECIES_MAGMORTAR
    2, //SPECIES_TOGEKISS
    1, //SPECIES_YANMEGA
    1, //SPECIES_LEAFEON
    0, //SPECIES_GLACEON
    2, //SPECIES_GLISCOR
    2, //SPECIES_MAMOSWINE
    0, //SPECIES_PORYGON_Z
    1, //SPECIES_GALLADE
    0, //SPECIES_PROBOPASS
    2, //SPECIES_DUSKNOIR
    0, //SPECIES_FROSLASS
    0, //SPECIES_ROTOM
    0, //SPECIES_UXIE
    0, //SPECIES_MESPRIT
    0, //SPECIES_AZELF
    2, //SPECIES_DIALGA
    2, //SPECIES_PALKIA
    0, //SPECIES_HEATRAN
    0, //SPECIES_REGIGIGAS
    0, //SPECIES_GIRATINA
    0, //SPECIES_CRESSELIA
    0, //SPECIES_PHIONE
    0, //SPECIES_MANAPHY
    0, //SPECIES_DARKRAI
    1, //SPECIES_SHAYMIN
    1, //SPECIES_ARCEUS
    0, //SPECIES_VICTINI
    1, //SPECIES_SNIVY
    1, //SPECIES_SERVINE
    1, //SPECIES_SERPERIOR
    0, //SPECIES_TEPIG
    0, //SPECIES_PIGNITE
    0, //SPECIES_EMBOAR
    0, //SPECIES_OSHAWOTT
    0, //SPECIES_DEWOTT
    2, //SPECIES_SAMUROTT
    2, //SPECIES_PATRAT
    2, //SPECIES_WATCHOG
    2, //SPECIES_LILLIPUP
    2, //SPECIES_HERDIER
    2, //SPECIES_STOUTLAND
    0, //SPECIES_PURRLOIN
    0, //SPECIES_LIEPARD
    1, //SPECIES_PANSAGE
    1, //SPECIES_SIMISAGE
    2, //SPECIES_PANSEAR
    2, //SPECIES_SIMISEAR
    2, //SPECIES_PANPOUR
    2, //SPECIES_SIMIPOUR
    0, //SPECIES_MUNNA
    0, //SPECIES_MUSHARNA
    0, //SPECIES_PIDOVE
    0, //SPECIES_TRANQUILL
    1, //SPECIES_UNFEZANT
    2, //SPECIES_BLITZLE
    2, //SPECIES_ZEBSTRIKA
    2, //SPECIES_ROGGENROLA
    0, //SPECIES_BOLDORE
    0, //SPECIES_GIGALITH
    0, //SPECIES_WOOBAT
    0, //SPECIES_SWOOBAT
    0, //SPECIES_DRILBUR
    0, //SPECIES_EXCADRILL
    1, //SPECIES_AUDINO
    1, //SPECIES_TIMBURR
    1, //SPECIES_GURDURR
    1, //SPECIES_CONKELDURR
    2, //SPECIES_TYMPOLE
    2, //SPECIES_PALPITOAD
    0, //SPECIES_SEISMITOAD
    0, //SPECIES_THROH
    0, //SPECIES_SAWK
    1, //SPECIES_SEWADDLE
    1, //SPECIES_SWADLOON
    1, //SPECIES_LEAVANNY
    1, //SPECIES_VENIPEDE
    2, //SPECIES_WHIRLIPEDE
    2, //SPECIES_SCOLIPEDE
    1, //SPECIES_COTTONEE
    1, //SPECIES_WHIMSICOTT
    1, //SPECIES_PETILIL
    1, //SPECIES_LILLIGANT
    1, //SPECIES_BASCULIN
    1, //SPECIES_SANDILE
    1, //SPECIES_KROKOROK
    0, //SPECIES_KROOKODILE
    0, //SPECIES_DARUMAKA
    0, //SPECIES_DARMANITAN
    1, //SPECIES_MARACTUS
    0, //SPECIES_DWEBBLE
    2, //SPECIES_CRUSTLE
    2, //SPECIES_SCRAGGY
    0, //SPECIES_SCRAFTY
    0, //SPECIES_SIGILYPH
    0, //SPECIES_YAMASK
    0, //SPECIES_COFAGRIGUS
    2, //SPECIES_TIRTOUGA
    2, //SPECIES_CARRACOSTA
    0, //SPECIES_ARCHEN
    0, //SPECIES_ARCHEOPS
    1, //SPECIES_TRUBBISH
    1, //SPECIES_GARBODOR
    0, //SPECIES_ZORUA
    0, //SPECIES_ZOROARK
    0, //SPECIES_MINCCINO
    0, //SPECIES_CINCCINO
    2, //SPECIES_GOTHITA
    2, //SPECIES_GOTHORITA
    2, //SPECIES_GOTHITELLE
    1, //SPECIES_SOLOSIS
    1, //SPECIES_DUOSION
    1, //SPECIES_REUNICLUS
    0, //SPECIES_DUCKLETT
    2, //SPECIES_SWANNA
    0, //SPECIES_VANILLITE
    2, //SPECIES_VANILLISH
    2, //SPECIES_VANILLUXE
    1, //SPECIES_DEERLING
    1, //SPECIES_SAWSBUCK
    2, //SPECIES_EMOLGA
    0, //SPECIES_KARRABLAST
    0, //SPECIES_ESCAVALIER
    0, //SPECIES_FOONGUS
    1, //SPECIES_AMOONGUSS
    0, //SPECIES_FRILLISH
    0, //SPECIES_JELLICENT
    0, //SPECIES_ALOMOMOLA
    0, //SPECIES_JOLTIK
    2, //SPECIES_GALVANTULA
    1, //SPECIES_FERROSEED
    1, //SPECIES_FERROTHORN
    0, //SPECIES_KLINK
    0, //SPECIES_KLANG
    0, //SPECIES_KLINKLANG
    0, //SPECIES_TYNAMO
    0, //SPECIES_EELEKTRIK
    0, //SPECIES_EELEKTROSS
    0, //SPECIES_ELGYEM
    2, //SPECIES_BEHEEYEM
    2, //SPECIES_LITWICK
    2, //SPECIES_LAMPENT
    2, //SPECIES_CHANDELURE
    1, //SPECIES_AXEW
    1, //SPECIES_FRAXURE
    2, //SPECIES_HAXORUS
    0, //SPECIES_CUBCHOO
    0, //SPECIES_BEARTIC
    0, //SPECIES_CRYOGONAL
    1, //SPECIES_SHELMET
    1, //SPECIES_ACCELGOR
    2, //SPECIES_STUNFISK
    1, //SPECIES_MIENFOO
    2, //SPECIES_MIENSHAO
    0, //SPECIES_DRUDDIGON
    0, //SPECIES_GOLETT
    0, //SPECIES_GOLURK
    0, //SPECIES_PAWNIARD
    0, //SPECIES_BISHARP
    2, //SPECIES_BOUFFALANT
    2, //SPECIES_RUFFLET
    0, //SPECIES_BRAVIARY
    0, //SPECIES_VULLABY
    1, //SPECIES_MANDIBUZZ
    2, //SPECIES_HEATMOR
    0, //SPECIES_DURANT
    2, //SPECIES_DEINO
    2, //SPECIES_ZWEILOUS
    2, //SPECIES_HYDREIGON
    0, //SPECIES_LARVESTA
    0, //SPECIES_VOLCARONA
    0, //SPECIES_COBALION
    2, //SPECIES_TERRAKION
    1, //SPECIES_VIRIZION
    1, //SPECIES_TORNADUS
    0, //SPECIES_THUNDURUS
    0, //SPECIES_RESHIRAM
    2, //SPECIES_ZEKROM
    0, //SPECIES_LANDORUS
    0, //SPECIES_KYUREM
    0, //SPECIES_KELDEO
    4, //SPECIES_MELOETTA
    2, //SPECIES_GENESECT
    1, //SPECIES_CHESPIN
    1, //SPECIES_QUILLADIN
    1, //SPECIES_CHESNAUGHT
    0, //SPECIES_FENNEKIN
    0, //SPECIES_BRAIXEN
    0, //SPECIES_DELPHOX
    0, //SPECIES_FROAKIE
    0, //SPECIES_FROGADIER
    0, //SPECIES_GRENINJA
    2, //SPECIES_BUNNELBY
    2, //SPECIES_DIGGERSBY
    2, //SPECIES_FLETCHLING
    2, //SPECIES_FLETCHINDER
    2, //SPECIES_TALONFLAME
    1, //SPECIES_SCATTERBUG
    1, //SPECIES_SPEWPA
    0, //SPECIES_VIVILLON
    2, //SPECIES_LITLEO
    2, //SPECIES_PYROAR
    1, //SPECIES_FLABEBE
    1, //SPECIES_FLOETTE
    0, //SPECIES_FLORGES
    1, //SPECIES_SKIDDO
    1, //SPECIES_GOGOAT
    1, //SPECIES_PANCHAM
    1, //SPECIES_PANGORO
    0, //SPECIES_FURFROU
    2, //SPECIES_ESPURR
    0, //SPECIES_MEOWSTIC
    2, //SPECIES_HONEDGE
    2, //SPECIES_DOUBLADE
    2, //SPECIES_AEGISLASH
    0, //SPECIES_SPRITZEE
    0, //SPECIES_AROMATISSE
    1, //SPECIES_SWIRLIX
    1, //SPECIES_SLURPUFF
    0, //SPECIES_INKAY
    2, //SPECIES_MALAMAR
    2, //SPECIES_BINACLE
    2, //SPECIES_BARBARACLE
    2, //SPECIES_SKRELP
    5, //SPECIES_DRAGALGE
    0, //SPECIES_CLAUNCHER
    0, //SPECIES_CLAWITZER
    2, //SPECIES_HELIOPTILE
    2, //SPECIES_HELIOLISK
    2, //SPECIES_TYRUNT
    0, //SPECIES_TYRANTRUM
    0, //SPECIES_AMAURA
    0, //SPECIES_AURORUS
    0, //SPECIES_SYLVEON
    0, //SPECIES_HAWLUCHA
    0, //SPECIES_DEDENNE
    2, //SPECIES_CARBINK
    5, //SPECIES_GOOMY
    5, //SPECIES_SLIGGOO
    5, //SPECIES_GOODRA
    0, //SPECIES_KLEFKI
    1, //SPECIES_PHANTUMP
    1, //SPECIES_TREVENANT
    2, //SPECIES_PUMPKABOO
    2, //SPECIES_GOURGEIST
    0, //SPECIES_BERGMITE
    0, //SPECIES_AVALUGG
    2, //SPECIES_NOIBAT
    2, //SPECIES_NOIVERN
    0, //SPECIES_XERNEAS
    0, //SPECIES_YVELTAL
    1, //SPECIES_ZYGARDE
    1, //SPECIES_DIANCIE
    0, //SPECIES_HOOPA
    0, //SPECIES_VOLCANION
    0, //SPECIES_ROWLET
    1, //SPECIES_DARTRIX
    1, //SPECIES_DECIDUEYE
    0, //SPECIES_LITTEN
    0, //SPECIES_TORRACAT
    0, //SPECIES_INCINEROAR
    0, //SPECIES_POPPLIO
    0, //SPECIES_BRIONNE
    0, //SPECIES_PRIMARINA
    2, //SPECIES_PIKIPEK
    0, //SPECIES_TRUMBEAK
    0, //SPECIES_TOUCANNON
    2, //SPECIES_YUNGOOS
    2, //SPECIES_GUMSHOOS
    0, //SPECIES_GRUBBIN
    1, //SPECIES_CHARJABUG
    0, //SPECIES_VIKAVOLT
    2, //SPECIES_CRABRAWLER
    2, //SPECIES_CRABOMINABLE
    0, //SPECIES_ORICORIO
    2, //SPECIES_CUTIEFLY
    2, //SPECIES_RIBOMBEE
    2, //SPECIES_ROCKRUFF
    2, //SPECIES_LYCANROC
    2, //SPECIES_WISHIWASHI
    2, //SPECIES_MAREANIE
    0, //SPECIES_TOXAPEX
    2, //SPECIES_MUDBRAY
    0, //SPECIES_MUDSDALE
    0, //SPECIES_DEWPIDER
    2, //SPECIES_ARAQUANID
    1, //SPECIES_FOMANTIS
    1, //SPECIES_LURANTIS
    0, //SPECIES_MORELULL
    1, //SPECIES_SHIINOTIC
    2, //SPECIES_SALANDIT
    0, //SPECIES_SALAZZLE
    0, //SPECIES_STUFFUL
    0, //SPECIES_BEWEAR
    1, //SPECIES_BOUNSWEET
    1, //SPECIES_STEENEE
    1, //SPECIES_TSAREENA
    1, //SPECIES_COMFEY
    0, //SPECIES_ORANGURU
    1, //SPECIES_PASSIMIAN
    2, //SPECIES_WIMPOD
    2, //SPECIES_GOLISOPOD
    1, //SPECIES_SANDYGAST
    2, //SPECIES_PALOSSAND
    0, //SPECIES_PYUKUMUKU
    0, //SPECIES_TYPE_NULL
    0, //SPECIES_SILVALLY
    0, //SPECIES_MINIOR
    2, //SPECIES_KOMALA
    0, //SPECIES_TURTONATOR
    2, //SPECIES_TOGEDEMARU
    1, //SPECIES_MIMIKYU
    0, //SPECIES_BRUXISH
    0, //SPECIES_DRAMPA
    1, //SPECIES_DHELMISE
    2, //SPECIES_JANGMO_O
    2, //SPECIES_HAKAMO_O
    2, //SPECIES_KOMMO_O
    0, //SPECIES_TAPU_KOKO
    0, //SPECIES_TAPU_LELE
    2, //SPECIES_TAPU_BULU
    0, //SPECIES_TAPU_FINI
    2, //SPECIES_COSMOG
    0, //SPECIES_COSMOEM
    0, //SPECIES_SOLGALEO
    2, //SPECIES_LUNALA
    0, //SPECIES_NIHILEGO
    0, //SPECIES_BUZZWOLE
    2, //SPECIES_PHEROMOSA
    0, //SPECIES_XURKITREE
    0, //SPECIES_CELESTEELA
    0, //SPECIES_KARTANA
    0, //SPECIES_GUZZLORD
    0, //SPECIES_NECROZMA
    0, //SPECIES_MAGEARNA
    0, //SPECIES_MARSHADOW
    0, //SPECIES_POIPOLE
    0, //SPECIES_NAGANADEL
    0, //SPECIES_STAKATAKA
    0, //SPECIES_BLACEPHALON
    0, //SPECIES_ZERAORA
    2, //SPECIES_MELTAN
    2, //SPECIES_MELMETAL
    1, // Egg
    0, // Unown B
    0, // Unown C
    0, // Unown D
    0, // Unown E
    0, // Unown F
    0, // Unown G
    0, // Unown H
    0, // Unown I
    0, // Unown J
    0, // Unown K
    0, // Unown L
    0, // Unown M
    0, // Unown N
    0, // Unown O
    0, // Unown P
    0, // Unown Q
    0, // Unown R
    0, // Unown S
    0, // Unown T
    0, // Unown U
    0, // Unown V
    0, // Unown W
    0, // Unown X
    0, // Unown Y
    0, // Unown Z
    0, // Unown Exclamation Mark
    0, // Unown Question Mark
};

const struct SpritePalette gMonIconPaletteTable[] =
{
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },

// There are only 3 actual palettes. The following are unused
// and don't point to valid data.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 },
};

static const struct OamData sMonIconOamData =
{
    .size = 2,
    .priority = 1,
};

// fastest to slowest

static const union AnimCmd sAnim_0[] =
{
    ANIMCMD_FRAME(0, 6),
    ANIMCMD_FRAME(1, 6),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_1[] =
{
    ANIMCMD_FRAME(0, 8),
    ANIMCMD_FRAME(1, 8),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_2[] =
{
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_3[] =
{
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0),
};

static const union AnimCmd sAnim_4[] =
{
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29), // frame 0 is repeated
    ANIMCMD_JUMP(0),
};

static const union AnimCmd *const sMonIconAnims[] =
{
    sAnim_0,
    sAnim_1,
    sAnim_2,
    sAnim_3,
    sAnim_4,
};

static const union AffineAnimCmd sAffineAnim_0[] =
{
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd sAffineAnim_1[] =
{
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END,
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] =
{
    sAffineAnim_0,
    sAffineAnim_1,
};

const u16 sSpriteImageSizes[3][4] =
{
    // square
    {
         0x20, // 1×1
         0x80, // 2×2
        0x200, // 4×4
        0x800, // 8×8
    },

    // horizontal rectangle
    {
         0x40, // 2×1
         0x80, // 4×1
        0x100, // 4×2
        0x400, // 8×4
    },

    // vertical rectangle
    {
         0x40, // 1×2
         0x80, // 1×4
        0x100, // 2×4
        0x400, // 4×8
    },
};

u16 GetUnownLetterByPersonality(u32);
const u8 *GetMonIconPtr(u16, u32 personality);
u8 UpdateMonIconFrame(struct Sprite *);
u8 CreateMonIconSprite(struct MonIconSpriteTemplate *, s16, s16, u8);
void sub_809D7E8(struct Sprite *);

// duplicate of sub_809D3A4
u8 unref_sub_809D26C(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = gMonIconTable[species],
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIcon(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority, u32 personality)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = GetMonIconPtr(species, personality),
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    if (species > SPECIES_EGG)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 sub_809D3A4(u16 species, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
    {
        .oam = &sMonIconOamData,
        .image = gMonIconTable[species],
        .anims = sMonIconAnims,
        .affineAnims = sMonIconAffineAnims,
        .callback = callback,
        .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
    };

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 mon_icon_convert_unown_species_id(u16 species, u32 personality)
{
    u16 result;

    if (species == SPECIES_UNOWN)
    {
        u16 letter = GetUnownLetterByPersonality(personality);
        if (letter == 0)
            letter = SPECIES_UNOWN;
        else
            letter += (SPECIES_UNOWN_B - 1);
        result = letter;
    }
    else
    {
        if (species > SPECIES_EGG)
            result = 260;
        else
            result = species;
    }

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    return (((personality & 0x3000000) >> 18) | ((personality & 0x30000) >> 12) | ((personality & 0x300) >> 6) | (personality & 0x3)) % 0x1C;
}

u16 sub_809D4A8(u16 species)
{
    u16 value;

    if (MailSpeciesToSpecies(species, &value) == SPECIES_UNOWN)
    {
        if (value == 0)
            value += SPECIES_UNOWN;
        else
            value += (SPECIES_UNOWN_B - 1);
        return value;
    }
    else
    {
        return mon_icon_convert_unown_species_id(species, 0);
    }
}

const u8 *GetMonIconPtr(u16 species, u32 personality)
{
    u16 convertedSpecies = mon_icon_convert_unown_species_id(species, personality);
    return gMonIconTable[convertedSpecies];
}

void sub_809D510(struct Sprite *sprite)
{
    sub_809D7E8(sprite);
}

void sub_809D51C(void)
{
    u8 i;
    for (i = 0; i < 6; i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

// unused
void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > SPECIES_EGG)
        species = 260;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void sub_809D580(u16 species)
{
    u8 palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

// unused
void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < 6; i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

// unused
void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > SPECIES_EGG)
        species = 260;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void sub_809D608(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void sub_809D62C(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

// TODO: try to find a way to avoid using asm statement
u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP,
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            {
                register u8 duration asm("r0") = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration;
                sprite->animDelayCounter = duration;
            }
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

u8 CreateMonIconSprite(struct MonIconSpriteTemplate *iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = 0xFFFF,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

void sub_809D7E8(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void sub_809D824(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
