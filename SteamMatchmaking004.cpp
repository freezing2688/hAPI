#include <STDInc.h>
#include "SteamMatchmaking004.h"

int SteamMatchmaking004::GetFavoriteGameCount() 
{
	HHSDBG();
	return 1;
}

bool SteamMatchmaking004::GetFavoriteGame(int iGame, AppId_t *pnAppID, uint32 *pnIP, uint16 *pnConnPort, uint16 *pnQueryPort, uint32 *punFlags, RTime32 *pRTime32LastPlayedOnServer)
{  
	HHSDBG();
	return true;
}
int SteamMatchmaking004::AddFavoriteGame(AppId_t nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags, RTime32 rTime32LastPlayedOnServer)
{ 
	HHSDBG();
	return true;
}
bool SteamMatchmaking004::RemoveFavoriteGame(uint32 nAppID, uint32 nIP, uint16 nConnPort, uint16 nQueryPort, uint32 unFlags)
{
	HHSDBG();
	return true;
}

SteamAPICall_t SteamMatchmaking004::RequestLobbyList()
{ 
	HHSDBG();
	return NULL;
}
void SteamMatchmaking004::AddRequestLobbyListFilter(const char *pchKeyToMatch, const char *pchValueToMatch)
{ 
	HHSDBG();
}
void SteamMatchmaking004::AddRequestLobbyListNumericalFilter(const char *pchKeyToMatch, int nValueToMatch, int nComparisonType)
{  
	HHSDBG();
}
OBSOLETE_FUNCTION void SteamMatchmaking004::AddRequestLobbyListSlotsAvailableFilter()
{ 
	HHSDBG();
}
CSteamID SteamMatchmaking004::GetLobbyByIndex(int iLobby)
{ 
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

void SteamMatchmaking004::CreateLobby(bool bPrivate)
{
	HHSDBG();
}
void SteamMatchmaking004::JoinLobby(CSteamID steamIDLobby)
{ 
	HHSDBG();
}
void SteamMatchmaking004::LeaveLobby(CSteamID steamIDLobby)
{ 
	HHSDBG();
}
bool SteamMatchmaking004::InviteUserToLobby(CSteamID steamIDLobby, CSteamID steamIDInvitee)
{ 
	HHSDBG();
	return true;
}
int SteamMatchmaking004::GetNumLobbyMembers(CSteamID steamIDLobby)
{  
	HHSDBG();
	return 1;
}

CSteamID SteamMatchmaking004::GetLobbyMemberByIndex(CSteamID steamIDLobby, int iMember)
{ 
	HHSDBG();
	return *SteamCommon::GetSteamID();
}

const char *SteamMatchmaking004::GetLobbyData(CSteamID steamIDLobby, const char *pchKey)
{ 
	HHSDBG();
	return "Meep";
}
bool SteamMatchmaking004::SetLobbyData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{ 
	HHSDBG();
	return true;
}
const char *SteamMatchmaking004::GetLobbyMemberData(CSteamID steamIDLobby, CSteamID steamIDUser, const char *pchKey)
{ 
	HHSDBG();
	return "Meep";
}
void SteamMatchmaking004::SetLobbyMemberData(CSteamID steamIDLobby, const char *pchKey, const char *pchValue)
{ 
	HHSDBG();
}

bool SteamMatchmaking004::SendLobbyChatMsg(CSteamID steamIDLobby, const void *pvMsgBody, int cubMsgBody)
{
	HHSDBG();
	return true;
}
int SteamMatchmaking004::GetLobbyChatEntry(CSteamID steamIDLobby, int iChatID, CSteamID *pSteamIDUser, void *pvData, int cubData, EChatEntryType *peChatEntryType)
{ 
	HHSDBG();
	return true;
}
bool SteamMatchmaking004::RequestLobbyData(CSteamID steamIDLobby)
{  
	HHSDBG();
	return true;
}
void SteamMatchmaking004::SetLobbyGameServer(CSteamID steamIDLobby, uint32 unGameServerIP, uint16 unGameServerPort, CSteamID steamIDGameServer)
{ 
	HHSDBG();
}
bool SteamMatchmaking004::GetLobbyGameServer(CSteamID steamIDLobby, uint32 *punGameServerIP, uint16 *punGameServerPort, CSteamID *psteamIDGameServer)
{  
	HHSDBG();
	return true;
}
bool SteamMatchmaking004::SetLobbyMemberLimit(CSteamID steamIDLobby, int cMaxMembers)
{  
	HHSDBG();
	return true;
}
int SteamMatchmaking004::GetLobbyMemberLimit(CSteamID steamIDLobby)
{ 
	HHSDBG();
	return 0;
}

bool SteamMatchmaking004::RequestFriendsLobbies()
{
	HHSDBG();
	return true;
}