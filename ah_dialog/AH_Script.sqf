/*****************************************************************
	➤ ғɪʟᴇ: AH_Script.sqf

	➤ sᴛᴇᴀᴍɪᴅ: STEAM_0:0:81603889
	➤ sᴛᴇᴀᴍɪᴅ𝟹: [U:1:163207778]
	➤ sᴛᴇᴀᴍɪᴅ𝟼𝟺: 76561198123473506
	➤ ʙᴀᴛᴛʟᴇʏᴇ ɢᴜɪᴅ: 8cb7b142527426144008be726d287e92

	➤ ɢɪᴛʟᴀʙ: gitlab.com/Saskatchewan
	➤ ɢɪᴛʜᴜʙ: github.com/GamingOnline

	➤ ᴄᴏɴᴛʀɪʙᴜᴛᴏʀs: Gaming
*****************************************************************/

params [
	["_gui", 0, [0]],
	["_script", "", [""]]
];

switch (_script) do { 
	case "AH_Menu" : {
		if (isNull findDisplay _gui) exitWith {};
		private _guiCTRL = _gui;
		private _idCTRL = [
			2401,
			2435,
			2200,
			1499,
			1500,
			1501,
			1502,
			1401,
			1400,
			1402,
			1450,
			1817,
			1816,
			1815,
			1814,
			1813,
			1812,
			1811,
			1810,
			1809,
			1808,
			1807,
			1805,
			1804,
			1801
		];
		private _commitTime = 0.25;
		/// Admin menu information (Player count & uptime)
		if ((!isNull findDisplay _guiCTRL) && (!isNil "AH_TimeStr")) then {
			(findDisplay _guiCTRL displayCtrl 2401) ctrlSetStructuredText parseText format["<t font='RobotoCondensedLight' align='right' valign='top' shadow='1' valign='middle'>Admin Menu - Online players: %1 - Uptime: %2</t>", str (count allPlayers), call AH_TimeStr];
		};
		//// Starting Animation...
		{
			private _ctrlPos = ctrlPosition (findDisplay _guiCTRL displayCtrl _x);
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition [1,1,0,0];
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetFade 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition _ctrlPos;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit _commitTime;
		} forEach _idCTRL;
		//// Typing animation...
		[_guiCTRL,_idCTRL] spawn {
			params ["_guiCTRL","_idCTRL"];
			private _txtC = 0;
			private _sleepTime = 0.2;
			while {!isNull findDisplay _guiCTRL} do {
				_text = [
					"f",
					"fi",
					"fin",
					"fini",
					"finiS",
					"finiST",
					"finiSTA",
					"finiSTAR",
					"finiSTAR A",
					"finiSTAR An",
					"finiSTAR Ant",
					"finiSTAR Anti",
					"finiSTAR Anti-",
					"finiSTAR Anti-H",
					"finiSTAR Anti-Ha",
					"finiSTAR Anti-Hac",
					"finiSTAR Anti-Hac",
					"finiSTAR Anti-Hack",
					"finiSTAR Anti-Hack +",
					"finiSTAR Anti-Hack + A",
					"finiSTAR Anti-Hack + Ad",
					"finiSTAR Anti-Hack + Adm",
					"finiSTAR Anti-Hack + Admi",
					"finiSTAR Anti-Hack + Admin",
					"finiSTAR Anti-Hack + Admin T",
					"finiSTAR Anti-Hack + Admin To",
					"finiSTAR Anti-Hack + Admin Too",
					"finiSTAR Anti-Hack + Admin Tool",
					"finiSTAR Anti-Hack + Admin Tools",
					"",
					"finiSTAR Anti-Hack + Admin Tools",
					"",
					"finiSTAR Anti-Hack + Admin Tools",
					""
				];
				_countArr = count(_text);
				if (_txtC >= _countArr) then {_txtC = 0;};
				(findDisplay 6971 displayCtrl 2435) ctrlSetStructuredText parseText format ["<t font='RobotoCondensedLight' align='left' valign='top' shadow='1' valign='middle'>%1</t>", _text select _txtC];
				_txtC = _txtC + 1;
				uisleep _sleepTime;
			};
		};
	}; 
	case "AH_Authenticate" : {
		if (isNull findDisplay _gui) exitWith {};
		private _guiCTRL = _gui;
		private _idCTRL = [
			1000,
			1100,
			1002,
			1101,
			1102,
			1600,
			1601
		];
		private _commitTime = 0.25;
		(findDisplay _guiCTRL displayCtrl 1101) ctrlSetStructuredText parseText "<t font='RobotoCondensedLight' align='center' valign='top' shadow='1'>finiSTAR [Authentication Required]</t>";
		//// Starting Animation...
		{
			private _ctrlPos = ctrlPosition (findDisplay _guiCTRL displayCtrl _x);
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition [1,1,0,0];
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetFade 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition _ctrlPos;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit _commitTime;
		} forEach _idCTRL;
	}; 
	case "AH_LagSwitch" : {
		
	}; 
	case "AH_ExecMenu" : {
		if (isNull findDisplay _gui) exitWith {};
		private _guiCTRL = _gui;
		private _idCTRL = [
			1700,
			1000,
			1399,
			1500,
			1600,
			1601,
			1602,
			1603,
			1400,
			1604,
			1401,
			1402,
			2800,
			1403,
			1404,
			2801,
			1405,
			1406,
			2802,
			1605
		];
		private _commitTime = 0.25;
		(findDisplay _guiCTRL displayCtrl 1000) ctrlSetStructuredText parseText "<t font='RobotoCondensedLight' align='left' valign='top' shadow='1'>finiSTAR Debug Console</t>";
		//// Starting Animation...
		{
			private _ctrlPos = ctrlPosition (findDisplay _guiCTRL displayCtrl _x);
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition [1,1,0,0];
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetFade 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit 0;
			(findDisplay _guiCTRL displayCtrl _x) ctrlSetPosition _ctrlPos;
			(findDisplay _guiCTRL displayCtrl _x) ctrlCommit _commitTime;
		} forEach _idCTRL;
	}; 
	default {
		systemChat "what o_O";
	}; 
};