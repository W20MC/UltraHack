#include "Includes/Hacks.hpp"
#include <Geode/modify/GameStatsManager.hpp>

using namespace geode::prelude;

class $modify(GameStatsManager) {
    bool isItemUnlocked(UnlockType type, int id) {
        if (type == UnlockType::GJItem && id == 17 && Mod::get()->getSavedValue<bool>("practice-sync") == true) {
            return true;
        }

        return GameStatsManager::isItemUnlocked(type, id);
    }
};
