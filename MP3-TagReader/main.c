#include <stdio.h>
#include <stdlib.h>
#include "open_files.c"
#include "reader.h"
#include "reader.c"
#include "types.h"


int main(int argc, char *argv[])
{

	readInfo.src_mp3_fname = argv[2];
	int options;
	if (open_files(&readInfo) == e_success)
	{
		printf ("Files opened\n");
	}
	else
	{
		printf ("Files not opened\n");
		return -1;
	}

	int n = get_version(&readInfo);
	switch (n)
	{
		case 1:
			break;
		case 2:
			if (version2_info(&readInfo) == e_failure)
			{
				printf ("version not valid\n");
			}
			else
			{
				printf ("-----Version-----\n");
			}
			break;

	}
	readInfo.size_of_tag = get_size_of_tag(&readInfo);
	if(strcmp(argv[1], "-v") == 0)
	{
	if(get_frame_id("TRCK", &readInfo, "TRACK") == e_failure)
	{
		printf ("No track===\n");
	}
	if (get_frame_id("TYER", &readInfo, "YEAR") == e_failure)
	{
		printf ("No Year\n");
	}
	if (get_frame_id("TPE1", &readInfo, "ARTIST") == e_failure)
	{
		printf ("No Artist\n");
	}
	if (get_frame_id("TIT2", &readInfo, "TITLE") == e_failure)
	{
		printf ("No Title\n");
	}
	if (get_frame_id("TALB", &readInfo, "ALBUM") == e_failure)
	{
		printf ("No Album\n");
	}
	if (get_frame_id("COMM", &readInfo, "COMMENT") == e_failure)
	{
		printf ("No Comment\n");
	}
	if (get_frame_id("TCON", &readInfo,"GENRE") == e_failure)
	{
		printf ("No Genre\n");
	}
	}
	else if(strcmp(argv[1], "-e") == 0)
	{
	printf("selct one of the choice\n");
	printf("\n1.album\n2.artist\n3.Title\n4.year\n5.track\n6.comment\n7.genre\n");
	scanf("%d", &options);

	switch(options)
	{
		case 1:
				if (write_frame_id("TALB", &readInfo,argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;
		case 2:
				if (write_frame_id("TPE1", &readInfo, argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;

		case 3:
				if (write_frame_id("TIT2", &readInfo,argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;
		case 4:
				if (write_frame_id("TYER", &readInfo, argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;
		case 5:
				if (write_frame_id("TRCK", &readInfo, argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;
		case 6:
				if (write_frame_id("COMM", &readInfo,argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				break;
		default:
				if (write_frame_id("TCON", &readInfo,argv[3]) == e_failure)
				{
					printf ("not written\n");
				}
				
		
	}
	}
}

