#include "Team.c"

#include "BlueTeam.c"
#include "GreenTeam.c"
#include "RedTeam.c"

class Teams {
    static Team lookupByUid(string uid) {
        auto playerTeams = new map<string, ref Team>();

        playerTeams["XCCyBF3Yt3qiSWazXbdQDGSXTuG2Rj1MLa-DxwAOYrs="] = new RedTeam;   // Case
        playerTeams["6hNjhNa_MBB-oh1A2-AEkp0FPyXd5qaJtyZtXYnPPxs="] = new RedTeam;   // Wired
        playerTeams["m8FYV9srDOOAGngTNfuwdDO1GkK9oGhPBYymGaH9R7A="] = new BlueTeam;  // Donut
        playerTeams["2gJxbF6iV2Z6ctPoOemoBUkBRy7JMjbM18GVHD4NIaM="] = new BlueTeam;  // Young W
        playerTeams["VOAxrMSXWH1nKWpahadcdT2KhUrC5gUjudjJwIZCx-4="] = new GreenTeam; // Winter
        playerTeams["Q2ZoW-RXXdBQwBZ03MYdsMtkoXca6_MpMpO98AqKqNA="] = new GreenTeam; // Cory

        return playerTeams[uid];
    }
}
