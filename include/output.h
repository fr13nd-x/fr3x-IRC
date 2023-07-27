

#ifndef __output_h_
#define __output_h_

	void	put_echo (char *);
	void	BX_put_it (const char *, ...);

	void	BX_send_to_server (const char *, ...);
	void	BX_my_send_to_server (int, const char *, ...);
	void	BX_queue_send_to_server (int, const char *, ...);

	void	say (const char *, ...);
	void	BX_fr3say (const char *, ...);
	void	serversay (int, int, const char *, ...);
	void	BX_yell (const char *, ...);
	void	error (const char *, ...);
	
	void	refresh_screen (unsigned char, char *);
	int	init_output (void);
	int	init_screen (void);
	void	put_file (char *);

	void	charset_ibmpc (void);
	void	charset_lat1 (void);
	void	charset_graf (void);
	void	charset_cst(void);
	char	*ov_server(int server);
	
extern	FILE	*irclog_fp;

#endif /* __output_h_ */
