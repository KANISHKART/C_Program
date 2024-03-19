#include <pcap.h>
#include <stdio.h>
void process(unsigned char *arg,
             const struct pcap_pkthdr *header,
             const unsigned char *frame)
{
    printf("The first 5 bytes of the frame "
           "transmitted are: ");
    for (int i = 0; i < 5; i++)
        printf("%u ", frame[i]);
    printf("\n");
}
int main(int argc, char **argv)
{
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *handle;
    char *dev = argv[1];
    if (argc < 2)
    {
        fprintf(
            stderr,
            "Expected to be given a network adapter "
            "name. Try %s <adapter name>\n",
            argv[0]);
        return 1;
    }
    handle =
        pcap_open_live(dev, 2048, 1, 1000, errbuf);
    if (handle == NULL)
    {
        fprintf(stderr, "%s\n", errbuf);
        return 1;
    }
    printf("Capturing packets with device \"%s\"\n",
           dev);
    pcap_loop(handle, -1, process, NULL);
    pcap_close(handle);
    return 0;
}