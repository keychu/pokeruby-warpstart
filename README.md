# Pokémon Ruby WarpStart
## (newPokemon branch - WIP branch adding new Pokemon from gen 4-7)

This is a modification of Pokemon Ruby that enables the player to start from different points in the game. 

It's intended to be used with my mod of Dabomstew's Universal Pokemon Randomizer to allow for more variety in randomizer races that can only last for a few hours. (I originally made it just for personal use, but decided to clean it up and actually publish it once it got more fleshed-out.)

---

**NOTE:** Only **v1.0** of English Pokemon **Ruby** is currently supported by the modded randomizer. Either use your favorite search engine to figure out how to get a copy and apply the patch in the GitHub release, or learn how to compile WarpStart by referencing the original directions for compiling Pokeruby in [INSTALL.md](INSTALL.md). They will be the same for this mod.

---

Here's the full rundown of what happens at the beginning of the game:
- The truck cutscene is skipped.
- After choosing a starter and saving Professor Birch, the player can choose to immediately warp to several different locations in the game. 
- The player is given the HMs they would have needed to reach that point in the game.
- The player is given some extra money and the five Poke Balls Professor Birch would have normally have given them.
- The player's starter is automatically given a varying number of Rare Candies depending on where they warp. These Rare Candies are applied individually to allow the player to choose moves, and whether to evolve or not.
- The player is given the gym badges for locations prior to the warped point. 
  - (However, *the gyms are not set as defeated*, meaning the player can choose to go back and defeat them for experience, but are not required to in order to beat the game.)
- The player is given the National Pokedex.
- The proper event flags are set.
- The player is warped to the location chosen.

Here's the list of locations you can choose from, and the number of Rare Candies each gives your starter:
  - Rustboro | 7
  - Slateport | 10
  - Mauville | 15
  - Fallarbor | 20
  - Lavaridge | 22
  - Fortree | 30
  - Lilycove | 35
  - Mossdeep | 40
  - No warp (play the game normally) | 0

--- 

This project was made by modifiying the Pokeruby disassembly project, which you can find here: https://github.com/pret/pokeruby. *Huge* thanks to the amazing work that's gone into the project, making mods like this possible!

Implementation of instant text - as well as a general blueprint for how to add lots of new Pokemon into Ruby - from [LOuroboros' pokeruby493 project](https://github.com/LOuroboros/pokeruby493).

**KNOWN ISSUES:**
- Obtaining Strength by smashing a rock in Rusturf Cave before completing the Peeko mission will play the cutscene with Wanda and her boyfriend, but they will be invisible. Everything else occurs as normal.