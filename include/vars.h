

#ifndef __vars_h_
#define __vars_h_

/* indexes for the irc_variable array */

enum VAR_TYPES {
	AINV_VAR,
	ALTNICK_VAR,
	ALT_CHARSET_VAR,
	ALWAYS_SPLIT_BIGGEST_VAR ,
	ANNOY_KICK_VAR ,
	AOP_VAR ,
	APPEND_LOG_VAR,
	AUTOKICK_ON_VERSION_VAR,
	AUTO_AWAY_VAR,
	AUTO_AWAY_TIME_VAR,
	AUTO_JOIN_ON_INVITE_VAR,
	AUTO_LIMIT_VAR,
	AUTO_NSLOOKUP_VAR ,
	AUTO_RECONNECT_VAR,
	AUTO_REJOIN_VAR ,
	AUTO_RESPONSE_VAR,
	AUTO_RESPONSE_STR_VAR,
	AUTO_UNBAN_VAR,
	AUTO_UNMARK_AWAY_VAR ,
	AUTO_WHOWAS_VAR  ,
	BANTIME_VAR,
	BEEP_VAR ,
	BEEP_ALWAYS_VAR ,
	BEEP_MAX_VAR ,
	BEEP_ON_MSG_VAR ,
	BEEP_WHEN_AWAY_VAR ,
	fr3_VAR,
	fr3X_HELP_VAR,
	BLINK_VIDEO_VAR,
	BOLD_VIDEO_VAR ,
	BOT_LOG_VAR,
	BOT_LOGFILE_VAR,
	BOT_MODE_VAR ,
	BOT_PASSWD_VAR,
	BOT_RETURN_VAR,
	BOT_TCL_VAR,
	CDCC_VAR,
	CDCC_FLOOD_AFTER_VAR,
	CDCC_FLOOD_RATE_VAR,
	CDCC_PROMPT_VAR,
	CDCC_SECURITY_VAR,
	CD_DEVICE_VAR,
	CHANGE_NICK_ON_KILL_VAR,
	CHANMODE_VAR,
	CHANNEL_NAME_WIDTH_VAR ,
	CHECK_BEEP_USERS_VAR ,
	CLIENTINFO_VAR ,
	CLOAK_VAR ,
	CLOCK_VAR ,
	CLOCK_24HOUR_VAR ,
	CLOCK_FORMAT_VAR,
	CLONE_CHECK_VAR,
	CLONE_COUNT_VAR,
	CMDCHARS_VAR ,
	COLOR_VAR,
	COMMAND_MODE_VAR ,
	COMMENT_BREAKAGE_VAR,
	COMPRESS_MODES_VAR,
	CONNECT_DELAY_VAR,
	CONNECT_TIMEOUT_VAR,
	CONTINUED_LINE_VAR ,
	CPU_SAVER_AFTER_VAR,
	CPU_SAVER_EVERY_VAR,
	CTCP_DELAY_VAR,
	CTCP_FLOOD_AFTER_VAR,
	CTCP_FLOOD_BAN_VAR,
	CTCP_FLOOD_PROTECTION_VAR ,
	CTCP_FLOOD_RATE_VAR,
	CTCP_VERBOSE_VAR,
	CTOOLZ_DIR_VAR ,
	DCC_AUTOGET_VAR ,
	DCC_AUTORENAME_VAR,
	DCC_AUTORESUME_VAR,
	DCC_BAR_TYPE_VAR,
	DCC_BLOCK_SIZE_VAR,
	DCC_DLDIR_VAR , 
	DCC_FAST_VAR,
	DCC_FORCE_PORT_VAR,
	DCC_GET_LIMIT_VAR,
	DCC_MAX_AUTOGET_SIZE_VAR ,
	DCC_QUEUE_LIMIT_VAR,
	DCC_SEND_LIMIT_VAR,
	DCC_TIMEOUT_VAR,
	DCC_ULDIR_VAR,
	DCC_USE_GATEWAY_ADDR_VAR,
	DEBUG_VAR ,
#if defined(__EMXPM__) || defined(WIN32)
	DEFAULT_CODEPAGE_VAR,
#endif
	DEFAULT_FONT_VAR,
	DEFAULT_MENU_VAR,
	DEFAULT_NICK_VAR,
	DEFAULT_REASON_VAR ,
	DEOPFLOOD_VAR ,
	DEOPFLOOD_TIME_VAR,
	DEOP_ON_DEOPFLOOD_VAR,
	DEOP_ON_KICKFLOOD_VAR,
	DETACH_ON_HUP,
	DISPATCH_UNKNOWN_COMMANDS_VAR,
	DISPLAY_VAR ,
	DISPLAY_ANSI_VAR,
	DISPLAY_PC_CHARACTERS_VAR,
	DOUBLE_STATUS_LINE_VAR,
	EIGHT_BIT_CHARACTERS_VAR,
	EXEC_PROTECTION_VAR ,
	FAKE_SPLIT_PATS_VAR,
	FLOATING_POINT_MATH_VAR,
	FLOOD_AFTER_VAR ,
	FLOOD_KICK_VAR ,
	FLOOD_PROTECTION_VAR ,
	FLOOD_RATE_VAR ,
	FLOOD_USERS_VAR ,
	FLOOD_WARNING_VAR ,
	FTP_GRAB_VAR,
	FULL_STATUS_LINE_VAR ,
	HACKING_VAR ,
	HACK_OPS_VAR,
	HEBREW_TOGGLE_VAR,
	HELP_PAGER_VAR ,
	HELP_PATH_VAR ,
	HELP_PROMPT_VAR ,
	HELP_WINDOW_VAR ,
	HIDE_PRIVATE_CHANNELS_VAR ,
	HIGHLIGHT_CHAR_VAR ,
	HIGH_BIT_ESCAPE_VAR,
	HISTORY_VAR ,
	HOLD_MODE_VAR ,
	HOLD_MODE_MAX_VAR ,
	HTTP_GRAB_VAR,
	IDENT_HACK_VAR,
	IDLE_CHECK_VAR,
	IGNORE_TIME_VAR,
	INDENT_VAR ,
	INPUT_ALIASES_VAR ,
	INPUT_GLOB_VAR,
	INPUT_PROMPT_VAR ,
	INSERT_MODE_VAR ,
	INVERSE_VIDEO_VAR ,
	JOINFLOOD_VAR,
	JOINFLOOD_TIME_VAR,
	JOIN_NEW_WINDOW_VAR,
	JOIN_NEW_WINDOW_TYPE_VAR,
	KICKFLOOD_VAR ,
	KICKFLOOD_TIME_VAR ,
	KICK_IF_BANNED_VAR ,
	KICK_ON_DEOPFLOOD_VAR ,
	KICK_ON_JOINFLOOD_VAR,
	KICK_ON_KICKFLOOD_VAR ,
	KICK_ON_NICKFLOOD_VAR ,
	KICK_ON_PUBFLOOD_VAR ,
	KICK_OPS_VAR ,
	LAMEIDENT_VAR,
	LAMELIST_VAR,
	LASTLOG_VAR ,
	LASTLOG_ANSI_VAR ,
	LASTLOG_LEVEL_VAR ,
	LLOOK_VAR ,
	LLOOK_DELAY_VAR ,
	LOAD_PATH_VAR ,
	LOG_VAR ,
	LOGFILE_VAR ,
	MAIL_VAR ,
	MANGLE_INBOUND_VAR,
	MANGLE_LOGFILES_VAR,
	MANGLE_OPERLOG_VAR,
	MANGLE_OUTBOUND_VAR,
	MAX_DEOPS_VAR ,
	MAX_IDLEKICKS_VAR ,
	MAX_SERVER_RECONNECT_VAR,
	MAX_URLS_VAR,
	MDI_VAR,
	META_STATES_VAR,
	MIRCS_VAR,
	MODE_STRIPPER_VAR ,
	MSGCOUNT_VAR, 
	MSGLOG_VAR ,
	MSGLOGFILE_VAR ,
	MSGLOG_LEVEL_VAR,
	NAMES_COLUMNS_VAR,
	NAT_ADDRESS_VAR,
	ND_SPACE_MAX_VAR,
	NEW_SERVER_LASTLOG_LEVEL_VAR,
	NEXT_SERVER_ON_LOCAL_KILL_VAR,
	NICKFLOOD_VAR,
	NICKFLOOD_TIME_VAR,
	NICKLIST_VAR,
	NICKLIST_SORT_VAR,
	NICK_COMPLETION_VAR,
	NICK_COMPLETION_CHAR_VAR,
	NICK_COMPLETION_LEN_VAR,
	NICK_COMPLETION_TYPE_VAR,
	NOTIFY_VAR,
	NOTIFY_HANDLER_VAR,
	NOTIFY_INTERVAL_VAR,
	NOTIFY_LEVEL_VAR,
	NOTIFY_ON_TERMINATION_VAR,
	NO_CTCP_FLOOD_VAR,
	NO_FAIL_DISCONNECT_VAR,
	NUM_BANMODES_VAR,
	NUM_KICKS_VAR,
	NUM_KILLS_VAR,
	NUM_OF_WHOWAS_VAR,
	NUM_OPMODES_VAR,
	OPER_MODES_VAR,
	ORIGNICK_TIME_VAR,
	OV_VAR,
	PAD_CHAR_VAR,
	PING_TYPE_VAR,
	PROTECT_CHANNELS_VAR,
	PUBFLOOD_VAR,
	PUBFLOOD_TIME_VAR,
	QUERY_NEW_WINDOW_VAR,
	QUERY_NEW_WINDOW_TYPE_VAR,
	QUEUE_SENDS_VAR,
	RANDOM_LOCAL_PORTS_VAR,
	RANDOM_SOURCE_VAR,
	REALNAME_VAR,
	REVERSE_STATUS_VAR,
	SAVEFILE_VAR,
	SCREEN_OPTIONS_VAR,
	SCRIPT_HELP_VAR,
	SCROLLBACK_VAR,
	SCROLLBACK_RATIO_VAR,
	SCROLL_LINES_VAR,
	SEND_AWAY_MSG_VAR,
	SEND_CTCP_MSG_VAR,
	SEND_IGNORE_MSG_VAR,
	SEND_OP_MSG_VAR,
	SERVER_GROUPS_VAR,
	SERVER_PROMPT_VAR,
	SHELL_VAR,
	SHELL_FLAGS_VAR,
	SHELL_LIMIT_VAR,
	SHITLIST_VAR,
	SHITLIST_REASON_VAR,
	SHOW_AWAY_ONCE_VAR,
	SHOW_CHANNEL_NAMES_VAR,
	SHOW_END_OF_MSGS_VAR,
	SHOW_NUMERICS_VAR,
	SHOW_NUMERICS_STR_VAR,
	SHOW_STATUS_ALL_VAR,
	SHOW_WHO_HOPCOUNT_VAR,
	SOCKS_HOST_VAR,
	SOCKS_PORT_VAR,
	STATUS_AWAY_VAR,
	STATUS_CDCCCOUNT_VAR,
	STATUS_CHANNEL_VAR,
	STATUS_CHANOP_VAR,
	STATUS_CLOCK_VAR,
	STATUS_CPU_SAVER_VAR,
	STATUS_DCCCOUNT_VAR,
	STATUS_DOES_EXPANDOS_VAR,
	STATUS_FLAG_VAR,
	STATUS_FORMAT_VAR,
	STATUS_FORMAT1_VAR,
	STATUS_FORMAT2_VAR,
	STATUS_FORMAT3_VAR,
	STATUS_HALFOP_VAR,
	STATUS_HOLD_VAR,
	STATUS_HOLD_LINES_VAR,
	STATUS_INSERT_VAR,
	STATUS_LAG_VAR,
	STATUS_MAIL_VAR,
	STATUS_MODE_VAR,
	STATUS_MSGCOUNT_VAR,
	STATUS_NICK_VAR,
	STATUS_NOTIFY_VAR,
	STATUS_NO_REPEAT_VAR,
	STATUS_OPER_VAR,
	STATUS_OPER_KILLS_VAR,
	STATUS_OVERWRITE_VAR,
	STATUS_QUERY_VAR,
	STATUS_SCROLLBACK_VAR,
	STATUS_SERVER_VAR,
	STATUS_TOPIC_VAR,
	STATUS_UMODE_VAR,
	STATUS_USER0_VAR,
	STATUS_USER1_VAR,
	STATUS_USER10_VAR,
	STATUS_USER11_VAR,
	STATUS_USER12_VAR,
	STATUS_USER13_VAR,
	STATUS_USER14_VAR,
	STATUS_USER15_VAR,
	STATUS_USER16_VAR,
	STATUS_USER17_VAR,
	STATUS_USER18_VAR,
	STATUS_USER19_VAR,
	STATUS_USER2_VAR,
	STATUS_USER20_VAR,
	STATUS_USER21_VAR,
	STATUS_USER22_VAR,
	STATUS_USER23_VAR,
	STATUS_USER24_VAR,
	STATUS_USER25_VAR,
	STATUS_USER26_VAR,
	STATUS_USER27_VAR,
	STATUS_USER28_VAR,
	STATUS_USER29_VAR,
	STATUS_USER3_VAR,
	STATUS_USER30_VAR,
	STATUS_USER31_VAR,
	STATUS_USER32_VAR,
	STATUS_USER33_VAR,
	STATUS_USER34_VAR,
	STATUS_USER35_VAR,
	STATUS_USER36_VAR,
	STATUS_USER37_VAR,
	STATUS_USER38_VAR,
	STATUS_USER39_VAR,
	STATUS_USER4_VAR,
	STATUS_USER5_VAR,
	STATUS_USER6_VAR,
	STATUS_USER7_VAR,
	STATUS_USER8_VAR,
	STATUS_USER9_VAR,
	STATUS_USERS_VAR,
	STATUS_VOICE_VAR,
	STATUS_WINDOW_VAR,
	SUPPRESS_SERVER_MOTD_VAR,
	SWATCH_VAR,
	TAB_VAR,
	TAB_MAX_VAR,
	TIMESTAMP_VAR,
	TIMESTAMP_AWAYLOG_HOURLY_VAR,
	TIMESTAMP_STRING_VAR,
	TRANSLATION_VAR,
	UNDERLINE_VIDEO_VAR,
	USERLIST_VAR,
	USERMODE_VAR,
	USER_FLAG_OPS_VAR,
	USER_FLAG_PROT_VAR,
	USER_INFO_VAR,
#define USERINFO_VAR USER_INFO_VAR
	WINDOW_DESTROY_PART_VAR,
	WINDOW_QUIET_VAR,
	WORD_BREAK_VAR,
	XTERM_VAR,
	XTERM_OPTIONS_VAR,
	XTERM_TITLE_VAR,
	_CDCC_CLOSE_IDLE_SENDS_TIME_VAR,
	_CDCC_MINSPEED_TIME_VAR,
	_CDCC_PACKS_OFFERED_VAR,
NUMBER_OF_VARIABLES
};

	int	do_boolean (char *, int *);
	void	setcmd (char *, char *, char *, char *);
	int	BX_get_int_var (enum VAR_TYPES);
	int	get_dllint_var (char *);

	char	*BX_get_string_var (enum VAR_TYPES);
	char	*get_dllstring_var (char *);

	char	*wget_string_var (Window *, enum VAR_TYPES);
	void	wset_string_var (Window *, enum VAR_TYPES, char *);

	void	BX_set_int_var (enum VAR_TYPES, unsigned int);
	void	BX_set_string_var (enum VAR_TYPES, char *);

	void	set_dllint_var (char *, unsigned int);
	void	set_dllstring_var (char *, char *);

	void	init_variables (void);
	char	*make_string_var (const char *);
	void	set_highlight_char (Window *, char *, int);
	int	charset_size (void);
	void	save_variables (FILE *, int);
	void	set_var_value (int, char *, IrcVariableDll *);
	void    save_set (FILE *);

extern	char	*var_settings[];
extern	int	loading_global;
	void	savefr3x_variables (FILE *);
	void	reinit_autoresponse (Window *, char *, int);
	void	clear_sets (void);
	void	clear_bindings (void);
	int	window_set_var (Window *, char *);
	void	init_window_variables (Window *);

#include "cset.h"
	
/* var_settings indexes  also used in display.c for highlights */
#define OFF 0
#define ON 1
#define TOGGLE 2

/* the types of IrcVariables */
#define BOOL_TYPE_VAR	0
#define CHAR_TYPE_VAR	1
#define INT_TYPE_VAR	2
#define STR_TYPE_VAR	3
#define SET_TYPE_VAR	4

#define	VF_NODAEMON	0x0001
#define VF_EXPAND_PATH	0x0002

#define VIF_CHANGED	0x01
#define VIF_GLOBAL	0x02
#define VIF_fr3X	0x04
#define VIF_PENDING	0x08

#define	DEBUG_COMMANDS		0x0001
#define	DEBUG_EXPANSIONS	0x0002
#define DEBUG_FUNCTIONS		0x0004
#define DEBUG_TCL		0x0008
#define DEBUG_CMDALIAS		0x0010
#define DEBUG_HOOK		0x0020
#define DEBUG_VARIABLE		0x0040
#define DEBUG_FUNC		0x0080

int	parse_mangle	(char *, int, char **);

#endif /* __vars_h_ */
