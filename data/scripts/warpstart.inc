WarpMenu::
    msgbox WarpText, 4

    multichoicegrid 0, 0, 73, 2, 1      @ ? / ? / multichoiceList ID / numColumns / ?
    switch RESULT
    case 0, IntroWarpToRustboro
    case 1, IntroWarpToSlateport
    case 2, IntroWarpToMauville
    case 3, IntroWarpToFallarbor
    case 4, IntroWarpToLavaridge
    case 5, IntroWarpToFortree
    case 6, IntroWarpToLilycove
    case 7, IntroWarpToMossdeep
    case 8, IntroWarpNone

    return

Check_Increment_Petalburg_Gym_State::
    @ juuuust in case I'm missing a use case
    @ don't increment the Petalburg Gym state if it's already at or beyond
    @ the 'open for battle' state
    compare VAR_PETALBURG_GYM_STATE, 6
    call_if_lt Increment_Petalburg_Gym_State
    return
    
Increment_Petalburg_Gym_State::
    addvar VAR_PETALBURG_GYM_STATE, 1
    return

IntroWarpCommon::
    @ If we warp - no matter where - run this script.

    special ScrSpecial_HealPlayerParty
    setflag FLAG_HIDE_BIRCH_BATTLE_POOCHYENA
    clearflag FLAG_HIDE_BIRCH_IN_LAB
    setflag FLAG_HIDE_BIRCH_STARTERS_BAG
    setvar VAR_ROUTE101_STATE, 3
    clearflag FLAG_SPECIAL_FLAG_0
	
    @ States that would be set after visit to lab that would normally follow this
    setvar VAR_BIRCH_LAB_STATE, 5
    setflag FLAG_ADVENTURE_STARTED
    setvar VAR_ROUTE102_ACCESSIBLE, 1
    setvar VAR_LITTLEROOT_RIVAL_STATE, 4
    setvar VAR_LITTLEROOT_STATE, 4		@ would normally be 3, but is 4 after getting Running Shoes
    hideobjectat 4, MAP_LITTLEROOT_TOWN		@ hide mom to prevent Running Shoes event upon returning

    @ Set Littleroot houses to correct event flags
    setflag FLAG_HIDE_BRENDAN_UPSTAIRS
    setflag FLAG_HIDE_MAY_UPSTAIRS
    @ setvar VAR_LITTLEROOT_HOUSES_STATE, 5
    @ setvar VAR_LITTLEROOT_HOUSES_STATE_2, 5
	
    @ Normally set a bit after
    setflag FLAG_SYS_B_DASH
	
    @ Wally flags + Gym 5 in state after Wally events
    setvar VAR_PETALBURG_GYM_STATE, 2
    setvar VAR_PETALBURG_STATE, 3
    @ add others

    @ Allow the player to nickname the starter
    bufferleadmonspeciesname 0
    msgbox LittlerootTown_ProfessorBirchsLab_Text_173EF8, MSGBOX_YESNO
    compare RESULT, YES
    call_if_eq LittlerootTown_ProfessorBirchsLab_EventScript_1A0678
	
    @ Give the player the starter Poke Balls
    giveitem_std ITEM_POKE_BALL, 5
	
    @ Give the player the Pokedex
    setflag FLAG_SYS_POKEDEX_GET

    @ Activate the National Dex
    @ Using the native function since simply setting the flag (FLAG_SYS_NATIONAL_DEX) 
    @   doesn't seem to work...
    callnative EnableNationalPokedex

    return

IntroWarpNone::
    @ Just do what the Route 101 script would normally do.

    applymovement 2, Route101_Movement_14EAD7
    waitmovement 0
    msgbox Route101_Text_16D191, 4
    special ScrSpecial_HealPlayerParty
    setflag FLAG_HIDE_BIRCH_BATTLE_POOCHYENA
    clearflag FLAG_HIDE_BIRCH_IN_LAB
    setflag FLAG_HIDE_BIRCH_STARTERS_BAG
    setvar VAR_BIRCH_LAB_STATE, 2
    setvar VAR_ROUTE101_STATE, 3
    clearflag FLAG_SPECIAL_FLAG_0
    warp MAP_LITTLEROOT_TOWN_PROFESSOR_BIRCHS_LAB, 255, 6, 5

    return

IntroWarpHandleRareCandies::
    @ Print a message saying we're giving the starter this number of Rare Candies
    buffernumberstring 1, VAR_SPECIAL_9
    msgbox WarpRareCandyText, 4

    callnative WarpStartRareCandy
    waitstate

    return

IntroWarpToRustboro::
    call IntroWarpCommon

    @ Give a number of Rare Candies depending on the area being warped to
    @ Save to a variable unused throughout the scripting to use in
    @   IntroWarpHandleRareCandies later.
    setvar VAR_SPECIAL_9, 7
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9

    @ Set Petalburg gym to be in proper state for post-Wally-intro
    setvar VAR_PETALBURG_GYM_STATE, 2
    
    @ Give some more money, how much depending on the area being warped to
    givemoney 0, 0    @ no extra money for Rustboro
    
    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_RUSTBORO_CITY
    warp MAP_RUSTBORO_CITY, 255, 16, 39
    @warpteleport
    
    return

IntroWarpToSlateport::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 10
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    @ Set badge flags for gyms that would have been beaten at this point.
    @ Do not set their flags for actually being beaten though.
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET

    @ Set Petalburg gym to be in proper state for having obtained this
    @ many badges
    setvar VAR_PETALBURG_GYM_STATE, 4

    @ Set Rusturf Tunnel state to post-Peeko, with Wanda and her boyfriend there.
    @ Avoids glitchy cutscene when smashing a rock for Strength.
    @ setvar VAR_RUSTURF_TUNNEL_STATE, 3    @ it isn't 3
    
    givemoney 500, 0

    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_SLATEPORT_CITY
    warp MAP_SLATEPORT_CITY, 255, 15, 15
    
    return

IntroWarpToMauville::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 15
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 4

    givemoney 800, 0
    
    @ Allow travelling back to Slateport
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110

    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_MAUVILLE_CITY
    warp MAP_MAUVILLE_CITY, 255, 22, 6
    
    return

IntroWarpToFallarbor::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 20
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 5
    
    givemoney 1200, 0
    
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110
    
    giveitem_std ITEM_HM06_ROCK_SMASH
	setflag FLAG_RECEIVED_HM06

    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_FALLARBOR_TOWN
    warp MAP_FALLARBOR_TOWN, 255, 14, 8
    
    return

IntroWarpToLavaridge::
    call IntroWarpCommon

    @ Lavaridge feels fairly low-level
    setvar VAR_SPECIAL_9, 22
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 5
    
    givemoney 1500, 0
    
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110
    
    @ Allow the player to access Mt. Chimney
    @ They normally would have cleared Mt. Chimney to get to Lavaridge.
    setflag FLAG_HIDE_GRUNTS_BLOCKING_CABLE_CAR
    
    giveitem_std ITEM_HM06_ROCK_SMASH
	setflag FLAG_RECEIVED_HM06
    
    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_LAVARIDGE_TOWN
    warp MAP_LAVARIDGE_TOWN, 255, 9, 7
    
    return
    
IntroWarpToFortree::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 30
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 6
    
    givemoney 3500, 0
    
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110
    
    setflag FLAG_HIDE_GRUNTS_BLOCKING_CABLE_CAR
    
    @ Remove guards on Route 119 blocking the way to the Weather Institute
    @ (from the other direction)
    setflag FLAG_HIDE_EVIL_TEAM_WEATHER_INSTITUTE
    
    giveitem_std ITEM_HM06_ROCK_SMASH
	setflag FLAG_RECEIVED_HM06
    giveitem_std ITEM_HM03_SURF
	setflag FLAG_RECEIVED_HM03
    giveitem_std ITEM_HM02_FLY @ fix duplicate given?
	setflag FLAG_RECEIVED_HM02
    
    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_FORTREE_CITY
    warp MAP_FORTREE_CITY, 255, 5, 7
    
    return
    
IntroWarpToLilycove::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 35
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 6
    
    givemoney 4000, 0
    
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110
    
    setflag FLAG_HIDE_GRUNTS_BLOCKING_CABLE_CAR
    
    setflag FLAG_HIDE_EVIL_TEAM_WEATHER_INSTITUTE
    
    @ Route 121 has a few Team Magma members sitting in the way on the route.
    @ They normally move when you get close to them, but you are on the 
    @ wrong side...
    @ This fixes the issue.
    setvar VAR_ROUTE121_STATE, 1
    setflag FLAG_HIDE_GRUNTS_ROUTE121
    
    giveitem_std ITEM_HM06_ROCK_SMASH
	setflag FLAG_RECEIVED_HM06
    giveitem_std ITEM_HM03_SURF
	setflag FLAG_RECEIVED_HM03
    giveitem_std ITEM_HM02_FLY
	setflag FLAG_RECEIVED_HM02
    
    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_LILYCOVE_CITY
    warp MAP_LILYCOVE_CITY, 255, 24, 15
    
    return

IntroWarpToMossdeep::
    call IntroWarpCommon

    setvar VAR_SPECIAL_9, 40
    giveitem_std ITEM_RARE_CANDY, VAR_SPECIAL_9
    
    setflag FLAG_BADGE01_GET
    setflag FLAG_BADGE02_GET
    setflag FLAG_BADGE03_GET
    setflag FLAG_BADGE04_GET
    setflag FLAG_BADGE05_GET
    setflag FLAG_BADGE06_GET
    
    setvar VAR_PETALBURG_GYM_STATE, 6
    
    givemoney 4500, 0
    
    setflag FLAG_HIDE_EVIL_TEAM_ROUTE110
    
    setflag FLAG_HIDE_GRUNTS_BLOCKING_CABLE_CAR
    
    setflag FLAG_HIDE_EVIL_TEAM_WEATHER_INSTITUTE
    
    setvar VAR_ROUTE121_STATE, 1
    setflag FLAG_HIDE_GRUNTS_ROUTE121
    
    setflag FLAG_MT_PYRE_ORB_STOLEN
    setflag FLAG_RECEIVED_RED_OR_BLUE_ORB
    setflag FLAG_EVIL_TEAM_ESCAPED_IN_SUBMARINE
    
    giveitem_std ITEM_HM06_ROCK_SMASH
	setflag FLAG_RECEIVED_HM06
    giveitem_std ITEM_HM03_SURF
	setflag FLAG_RECEIVED_HM03
    giveitem_std ITEM_HM02_FLY
	setflag FLAG_RECEIVED_HM02
    
    call IntroWarpHandleRareCandies

    setrespawn HEAL_LOCATION_MOSSDEEP_CITY
    warp MAP_MOSSDEEP_CITY, 255, 28, 17
    
    return
