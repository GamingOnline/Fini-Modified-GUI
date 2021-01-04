AH_AM_ManageHeader = compileFinal '
	params [
		["_ctrl",controlNull,[controlNull]]
	];
	if (isNil "AH_AdminLevel") exitWith {};
	if (!((call AH_AdminLevel) >= 0)) exitWith {};
	private _headerStr = "";
	private _count = -1;
	private _mode = 0;
	while {!isNull _ctrl} do {
		if (_mode == 1) then {
			_count = _count - 1;
			_headerStr = format["Admin Menu - Online players: %1 - Uptime: %2", str(count allPlayers), if (!isNil "AH_TimeStr") then {(call AH_TimeStr)} else {"ERROR"}];
			_trim = [_headerStr, 0, _count] call BIS_fnc_trimString;
			_ctrl ctrlSetStructuredText parseText ("<t size=""0.85"" font=""PuristaSemiBold"">" + _trim + "</t>");
			if ((_count) <= 0) then {_mode = 0;};
		} else {
			_count = _count + 1;
			_headerStr = format["Admin Menu - Online players: %1 - Uptime: %2", str(count allPlayers), if (!isNil "AH_TimeStr") then {(call AH_TimeStr)} else {"ERROR"}];
			_trim = [_headerStr, 0, _count] call BIS_fnc_trimString;
			_ctrl ctrlSetStructuredText parseText ("<t size=""0.85"" font=""PuristaSemiBold"">" + _trim + "</t>");
			if ((_count) >= (count(_headerStr) + 100)) then {_mode = 1;};
		};
		uisleep 0.05;
	};
';

AH_AM_ManageHeaderDev = compileFinal '
	params [
		["_ctrl",controlNull,[controlNull]]
	];
	if (isNil "AH_AdminLevel") exitWith {};
	if (!((call AH_AdminLevel) >= 0)) exitWith {};
	private _headerStr = "";
	private _count = -1;
	private _mode = 0;
	while {!isNull _ctrl} do {
		if (_mode == 1) then {
			_count = _count - 1;
			_headerStr = format["Developer Menu - %1", name player];
			_trim = [_headerStr, 0, _count] call BIS_fnc_trimString;
			_ctrl ctrlSetStructuredText parseText ("<t size=""0.85"" font=""PuristaSemiBold"">" + _trim + "</t>");
			if ((_count) <= 0) then {_mode = 0;};
		} else {
			_count = _count + 1;
			_headerStr = format["Developer Menu - %1", name player];
			_trim = [_headerStr, 0, _count] call BIS_fnc_trimString;
			_ctrl ctrlSetStructuredText parseText ("<t size=""0.85"" font=""PuristaSemiBold"">" + _trim + "</t>");
			if ((_count) >= (count(_headerStr) + 100)) then {_mode = 1;};
		};
		uisleep 0.05;
	};
';

AH_AM_Notification = compileFinal '
	params[
		["_text","",[""]]
	];
	if (isNil "AH_AdminLevel") exitWith {};
	if (!((call AH_AdminLevel) >= 0)) exitWith {};

	if (isServer) exitWith {};
	if (count(_text) > 50) exitWith {};
	if (isRemoteExecuted) exitWith {};

	disableSerialization;

	if (_text find "AH:" > -1) then {
		_text = [_text, ((_text find "AH:") + 4), count(_text)] call BIS_fnc_trimString;
	};

	private _ctrl = (finddisplay 46) ctrlCreate ["AH_ctrlStructuredText", -1];
	_ctrl ctrlSetStructuredText parseText ("<img align=""center"" color=""#ffffff"" size=""2"" image=""dialog\AH\fini.paa""/><t align=""center"" size=""1.5"" shadow=""1"">" + " " + "AH: " + _text + "</t>");
	_ctrl ctrlSetFont "PuristaSemiBold";
	_ctrl ctrlSetTextColor [
		(profilenamespace getvariable ["GUI_BCG_RGB_R",0.77]),
		(profilenamespace getvariable ["GUI_BCG_RGB_G",0.51]),
		(profilenamespace getvariable ["GUI_BCG_RGB_B",0.08]),
		1
	];
	_ctrl ctrlSetPosition [
		0.35 * safezoneW + safezoneX,
		((0.7 * safezoneH + safezoneY) + (5 * (pixelH * pixelGrid * 0.50))),
		0.3 * safezoneW,
		((ctrlTextHeight _ctrl) + (0.005 * safezoneH))
	];
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetPosition [
		0.35 * safezoneW + safezoneX,
		((0.7 * safezoneH + safezoneY) + (5 * (pixelH * pixelGrid * 0.50))),
		0.3 * safezoneW,
		((ctrlTextHeight _ctrl) + (0.005 * safezoneH))
	];
	_ctrl ctrlSetFade 1;
	_ctrl ctrlCommit 0;
	_ctrl ctrlSetFade 0;
	_ctrl ctrlCommit 0.4;

	[_ctrl] spawn {
		disableSerialization;
		private _ctrl = _this select 0;
		private _time = 8;
		uisleep _time;
		_ctrl ctrlSetFade 1;
		_ctrl ctrlCommit 0.3;
		uiSleep 0.3;
		AH_AM_MessageArr deleteAt (AH_AM_MessageArr find _ctrl);
		ctrlDelete _ctrl;
	};

	private _posText = (ctrlPosition (_ctrl)) select 1;
	private _textHigh = (ctrlPosition (_ctrl)) select 3;
	if(isNil{AH_AM_MessageArr}) then {AH_AM_MessageArr = [];};
	if (count AH_AM_MessageArr > 0) then {
		private _activeNotifications = 0;
		{
			private _ctrlText = _x;
			if (!isNull _ctrlText) then {
				_ctrlText ctrlSetPosition [(ctrlPosition _ctrlText # 0), (_posText + _textHigh + 2*(0.001 * safezoneH))];
				_ctrlText ctrlCommit 0.3;
				_posText = (_posText + _textHigh + 2*(0.0009 * safezoneH));
				_textHigh = (ctrlPosition (_ctrlText)) select 3;
				if (_activeNotifications > 1) then {
					_ctrlText ctrlSetFade 1;
					_ctrlText ctrlCommit 0.2;
				};
				_activeNotifications = _activeNotifications + 1;
			};
		} forEach AH_AM_MessageArr;
	};

	AH_AM_MessageArr = ([_ctrl] + AH_AM_MessageArr) select {!isNull _x};
';