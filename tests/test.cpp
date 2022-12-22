#include "gtest/gtest.h"
#include "../header/StoryBoard.hpp"
#include <string>
using namespace std;

TEST(PlayerTests, TestConstructor)
{
	string playerName = "iris";
	string jobName = "Archer";
 	EXPECT_NO_THROW(Player* aPlayer = new Player(playerName, jobName, 100, 15););
}

TEST(PlayerTests, TestHealth)
{
	string playerName = "iris";
	string jobName = "Archer";
	Player* aPlayer = new Player(playerName, jobName, 100, 15);
	EXPECT_EQ(aPlayer->getHealth(), 100);
}

TEST(PlayerTests, TestHealth2FailCase) //meant to fail
{
	string playerName = "iris";
	string jobName = "Archer";
	Player* aPlayer = new Player(playerName, jobName, 100, 15);
	EXPECT_EQ(aPlayer->getHealth(), 50);
}

TEST(PlayerTests, TestPlayerName)
{
	string playerName = "iris";
	string jobName = "Archer";
	Player* aPlayer = new Player(playerName, jobName, 100, 15);
	EXPECT_EQ(aPlayer->getName(), playerName);
}

TEST(PlayerTests, TestPlayerName2FailCase) //meant to fail
{
	string playerName = "iris";
	string jobName = "Archer";
	Player* aPlayer = new Player(playerName, jobName, 100, 15);
	EXPECT_EQ(aPlayer->getName(), "player");
}

TEST(MobTests, TestHealth)
{
	Mob* aMob = new Mob(100, 15, "mob");
	EXPECT_EQ(aMob->getHealth(), 100);
}
TEST(MobTests, TestHealth2)
{
	Mob* aMob = new Mob(50, 15, "mob");
	EXPECT_EQ(aMob->getHealth(), 50);
}
TEST(MobTests, TestMobName)
{
	Mob* aMob = new Mob(50, 15, "mob");
	EXPECT_EQ(aMob->getName(), "mob");
}
TEST(MobTests, TestMobName2)
{
	Mob* aMob = new Mob(50, 15, "mob1024");
	EXPECT_EQ(aMob->getName(), "mob1024");
}
TEST(MobTests, TestAttack)
{
	Mob* aMob = new Mob(100, 15, "mob");
	EXPECT_EQ(aMob->attack(), 15);
}
TEST(MobTests, TestAttack2)
{
	Mob* aMob = new Mob(100, 30, "mob");
	EXPECT_EQ(aMob->attack(), 30);
}
TEST(MobTests, TestIsDead)
{
	Mob* aMob = new Mob(0, 15, "mob");
	EXPECT_TRUE(aMob->isDead());
}
TEST(MobTests, TestIsDead2)
{
	Mob* aMob = new Mob(100, 15, "mob");
	EXPECT_FALSE(aMob->isDead());
}

TEST(CombatTests, TestMobTakeDamage)
{
	Player* aPlayer = new Player("iris", "Wizard", 100, 15);
	Mob* aMob = new Mob(100, 15, "mob");
	aMob->takeDamage(15);
	EXPECT_EQ(aMob->getHealth(), 85);
}
TEST(CombatTests, TestPlayerTakeDamage2)
{
	Player* aPlayer = new Player("iris", "Wizard", 100, 15);
	Mob* aMob = new Mob(100, 15, "mob");
	aPlayer->takeDamage(aMob->attack());
	EXPECT_EQ(aPlayer->getHealth(), 85);

}

TEST(InventoryTests, TestOpenInventory)
{
	Inventory inventory_test;
	EXPECT_NO_THROW(inventory_test.printItem());

}
TEST(InventoryTests, TestOpenInventory2)
{
	Inventory inventory_test;
	Item* aWeapon = new Weapons(10, "weapon1");
	inventory_test.collectItem(aWeapon);
	EXPECT_NO_THROW(inventory_test.printItem());
}
TEST(InventoryTests, TestgetItem)
{
	Inventory inventory_test;
	Item* aWeapon = new Weapons(10, "weapon1");
	inventory_test.collectItem(aWeapon);
	Item* aPotion = new Potion("potion1");
	inventory_test.collectItem(aPotion);
	EXPECT_EQ(inventory_test.getItem(1), aWeapon);
}
TEST(InventoryTests, TestgetItem2)
{
	Inventory inventory_test;
	Item* aWeapon = new Weapons(10, "weapon1");
	inventory_test.collectItem(aWeapon);
	Item* aPotion = new Potion("potion1");
	inventory_test.collectItem(aPotion);
	EXPECT_EQ(inventory_test.getItem(2), aPotion);
}
TEST(InventoryTests, TestInventoryEmpty)
{
	Inventory inventory_test;
	EXPECT_TRUE(inventory_test.isEmpty());
}
TEST(InventoryTests, TestInventoryEmpty2)
{
	Inventory inventory_test;
	Item* aWeapon = new Weapons(10, "weapon1");
	inventory_test.collectItem(aWeapon);
	EXPECT_FALSE(inventory_test.isEmpty());
}
TEST(InventoryTests, TesDeleteItem)
{
	Inventory inventory_test;
	Item* aWeapon = new Weapons(10, "weapon1");
	inventory_test.collectItem(aWeapon);
	EXPECT_NO_THROW(inventory_test.deleteItem(0));
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
