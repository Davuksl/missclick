# Issue list
## MEANINGS
(NBF) = not being fixed
(W) = working on
(WS) = working on soon
(FX) = fixed
## NPC
Whenever touching npcs, ai_navigator.cpp and ai_blended_movement.cpp give assertions out of nowhere on lines 962, 1012(nav), 495, 131(blend). Seems to be issues with failed interior and goal sequences. Sequences are existing in the /mod_hl2mp/scenes/scenes.image file (W)

Also, animations are completely broken, and gestures don't work. (WS)
## Vehicles
When you get into a car, the playermodel just disappears, but the vehicle works just fine. Not that important, but a bit important for visuals. (NBF for now)
## Game
When you equip weapon_physgun, basecombatentity gives an assertion. Doesn't seem to do much, so not working on it. (NBF)

### Last updated 6/25/2026 by depsep