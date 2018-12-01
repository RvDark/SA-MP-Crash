#include <a_samp>

new PlayerObject[MAX_PLAYERS];

stock Crash(playerid)
{
  new Float:X, Float:Y, Float:Z;
  GetPlayerPos(playerid, X, Y, Z);
  PlayerObject[playerid] = CreatePlayerObject(playerid, 20000, X, Y, Z, 0.0, 0.0, 0.0);
  SetTimerEx("DPlayerObject", 3000, false, "d", playerid);
  return 1;
}

forward DPlayerObject(playerid);
public DPlayerObject(playerid)
{
  DestroyPlayerObject(playerid, PlayerObject[playerid]);
  return 1;
}
