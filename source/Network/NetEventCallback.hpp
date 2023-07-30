#pragma once

#include "RakNetTypes.h"
#include "Packet.hpp"
class Packet;
class LoginPacket;
class MessagePacket;
class StartGamePacket;
class AddPlayerPacket;
class RemoveEntityPacket;
class MovePlayerPacket;
class PlaceBlockPacket;
class RemoveBlockPacket;
class UpdateBlockPacket;
class RequestChunkPacket;
class ChunkDataPacket;
class PlayerEquipmentPacket;
#include "Level.hpp"
class Level;

class NetEventCallback
{
public:
	virtual ~NetEventCallback() {}
	virtual void levelGenerated(Level*);
	virtual void onConnect(const RakNet::RakNetGUID&);
	virtual void onUnableToConnect();
	virtual void onNewClient(const RakNet::RakNetGUID&);
	virtual void onDisconnect(const RakNet::RakNetGUID&);
	virtual void handle(const RakNet::RakNetGUID&, LoginPacket*);
	virtual void handle(const RakNet::RakNetGUID&, MessagePacket*);
	virtual void handle(const RakNet::RakNetGUID&, StartGamePacket*);
	virtual void handle(const RakNet::RakNetGUID&, AddPlayerPacket*);
	virtual void handle(const RakNet::RakNetGUID&, RemoveEntityPacket*);
	virtual void handle(const RakNet::RakNetGUID&, MovePlayerPacket*);
	virtual void handle(const RakNet::RakNetGUID&, PlaceBlockPacket*);
	virtual void handle(const RakNet::RakNetGUID&, RemoveBlockPacket*);
	virtual void handle(const RakNet::RakNetGUID&, UpdateBlockPacket*);
	virtual void handle(const RakNet::RakNetGUID&, RequestChunkPacket*);
	virtual void handle(const RakNet::RakNetGUID&, ChunkDataPacket*);
	virtual void handle(const RakNet::RakNetGUID&, PlayerEquipmentPacket*);
};

