# Lem-In

## Goal

- Find the shortest path to get n ants across a colony (comprised of rooms and tunnels).

- At the beginning of the game, all the ants are in the room ##start. The goal is to bring them to the room ##end with as few moves as possible.

- Each room can only contain one ant at a time (except at ##start and ##end which can contain as many ants as necessary).
- Some maps will have many rooms and many links, but no path between start and end.
- Some maps will have rooms that link to themselves, sending your path-search spinning in circles.
- Some maps will have too many/too few ants, no start or end, duplicate rooms, links to unknown rooms,
- rooms with invalid coordinates, and a variety of other invalid or poorly-formatted input.
- Ants will also need to avoid traffic jams (walking all over their fellow ants).

## Setup 
```
git clone https://github.com/anamsell/Lemin.git lemin
cd lemin
make
```
## Examples
```
/lem-in < map1.txt

```
