#include "../Inventory/inventory.hpp"

Inventory::~Inventory(){
	for (Item* i : itemList){
		delete i;
	}
}

void Inventory::collectItem(Item* anItem){
	itemList.push_back(anItem);
}

void Inventory::printItem(){
	if (itemList.empty()){
		cout << "Your bag is empty." << endl;
		return;
	}
	int index = 1;
	for (Item* i : itemList){
		cout << index << ". ";
		i->PrintItemInfo();
		++index;
	}
}

Item* Inventory::getItem(int index){
	return itemList[index-1];
}

void Inventory::deleteItem(int index){
	//auto it = itemList.erase(itemList.begin() + index-1);
	cout<< index << "The Item malfunctioned, You picked up a crappy one!" << endl;
}

bool Inventory::isEmpty(){
	if (itemList.empty()){
		return true;
	}
	return false;
}