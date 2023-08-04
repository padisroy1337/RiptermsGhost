#pragma once
#include <string>
inline const std::string mappings_lunar_1_16_5 = R"(
{
	"java/lang/Object": {
		"obfuscated": "java/lang/Object",
		"fields": [],
		"methods": []
	},
	"java/util/Collection": {
		"obfuscated": "java/util/Collection",
		"fields": [],
		"methods": [
			{
				"name": "toArray",
				"obfuscated": "toArray",
				"signature": "()[Ljava/lang/Object;",
				"static": false
			}
		]
	},
	"java/util/List": {
		"obfuscated": "java/util/List",
		"fields": [],
		"methods": []
	},
	"net/minecraft/client/Minecraft": {
		"obfuscated": "net/minecraft/client/Minecraft",
		"fields": [
			{
				"name": "theMinecraft",
				"obfuscated": "instance",
				"signature": "Lnet/minecraft/client/Minecraft;",
				"static": true
			},
			{
				"name": "thePlayer",
				"obfuscated": "player",
				"signature": "Lnet/minecraft/client/player/LocalPlayer;",
				"static": false
			},
			{
				"name": "theWorld",
				"obfuscated": "level",
				"signature": "Lnet/minecraft/client/multiplayer/ClientLevel;",
				"static": false
			}
		],
		"methods": [
		]
	},
	"net/minecraft/client/entity/EntityPlayerSP": {
		"obfuscated": "net/minecraft/client/player/LocalPlayer",
		"fields": [],
		"methods": []
	},
	"net/minecraft/client/entity/AbstractClientPlayer": {
		"obfuscated": "net/minecraft/client/player/AbstractClientPlayer",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/player/EntityPlayer": {
		"obfuscated": "net/minecraft/world/entity/player/Player",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/EntityLivingBase": {
		"obfuscated": "net/minecraft/world/entity/LivingEntity",
		"fields": [],
		"methods": []
	},
	"net/minecraft/entity/Entity": {
		"obfuscated": "net/minecraft/world/entity/Entity",
		"fields": [
			{
				"name": "positionVec",
				"obfuscated": "position",
				"signature": "Lnet/minecraft/world/phys/Vec3;",
				"static": false
			},
			{
				"name": "rotationYaw",
				"obfuscated": "yRot",
				"signature": "F",
				"static": false
			},
			{
				"name": "rotationPitch",
				"obfuscated": "xRot",
				"signature": "F",
				"static": false
			}
		],
		"methods": []
	},
	"net/minecraft/client/multiplayer/WorldClient": {
		"obfuscated": "net/minecraft/client/multiplayer/ClientLevel",
		"fields": [
			{
				"name": "players",
				"obfuscated": "players",
				"signature": "Ljava/util/List;",
				"static": false
			}
		],
		"methods": []
	},
	"net/minecraft/world/World": {
		"obfuscated": "net/minecraft/world/level/Level",
		"fields": [
		],
		"methods": []
	},
	"net/minecraft/util/Vec3": {
		"obfuscated": "net/minecraft/world/phys/Vec3",
		"fields": [
			{
				"name": "xCoord",
				"obfuscated": "x",
				"signature": "D",
				"static": false
			},
			{
				"name": "yCoord",
				"obfuscated": "y",
				"signature": "D",
				"static": false
			},
			{
				"name": "zCoord",
				"obfuscated": "z",
				"signature": "D",
				"static": false
			}
		],
		"methods": []
	}
}
)";