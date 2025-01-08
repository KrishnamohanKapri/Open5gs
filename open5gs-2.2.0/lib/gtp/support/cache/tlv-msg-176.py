ies = []
ies.append({ "ie_type" : "Cause", "ie_value" : "Cause", "presence" : "CO", "instance" : "0", "comment" : "If SGW receives an Error Indication from eNodeB/RNC/S4-SGSN/MME, the SGW shall send the Cause IE with value Error Indication received from RNC/eNodeB/S4-SGSN/MME to MME/S4-SGSN as specified in 3GPP TS 23.007 [17]."})
ies.append({ "ie_type" : "EBI", "ie_value" : "EPS Bearer ID", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included on the S11 and S4 interfaces and shall be set as follows: If the Downlink Data Notification is triggered by the arrival of downlink data packets at the SGW, the SGW shall include the EPS Bearer ID stored in the EPS bearer context of the bearer on which the downlink data packet was received; If the Downlink Data Notification is triggered by the receipt of an Error Indication from the eNodeB, RNC or S4-SGSN, the SGW shall include the EPS Bearer ID stored in the EPS bearer context of the bearer for which the Error Indication was received;If the ISR is active and the Downlink Data Notification is triggered by the arrival of control plane signalling, the SGW shall include the EPS Bearer ID present in the control plane signalling or derived from the control plane signaling (for PMIP based S5/S8), See NOTE 3). For a Downlink Data Notification triggered by a Create Bearer Request message, the SGW shall include the EPS Bearer ID of the corresponding PDN connections default bearer.If both the SGW and the MME/S4-SGSN support the network triggered service restoration procedure (see 3GPP TS 23.007 [17]), and if the Downlink Data Notification is triggered by the arrival of control plane signalling, the SGW shall include the EPS Bearer ID present in the control plane signalling or derived from the control plane signaling (for PMIP based S5/S8). (See 3GPP TS 23.401[3], clause 5.3.4.3).More than one IE with this type and instance values may be included to represent multiple bearers having received downlink data packets or being signalled in the received control plane message. See NOTE 1."})
ies.append({ "ie_type" : "ARP", "ie_value" : "Allocation/Retention Priority", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included on the S11 and S4 interfaces and shall be set as follows: If the Downlink Data Notification is triggered by the arrival of downlink data packets at the SGW, the SGW shall include the ARP stored in the EPS bearer context of the bearer on which the downlink data packet was received; If the Downlink Data Notification is triggered by the receipt of an Error Indication from the eNodeB, RNC or S4-SGSN, the SGW shall include the ARP stored in the EPS bearer context of the bearer for which the Error Indication was received.If the ISR is active and the Downlink Data Notification is triggered by the arrival of control plane signalling, the SGW shall include the ARP if present in the control  plane signalling. If the ARP is not present in the control plane signalling, the SGW shall include the ARP in the stored EPS bearer context. See NOTE 3.If both the SGW and the MME/S4-SGSN support the network triggered service restoration procedure (see 3GPP TS 23.007 [17]), and if the Downlink Data Notification is triggered by the arrival of control plane signalling, the SGW shall include the ARP if present in the control plane signalling. If the ARP is not present in the control plane signalling, the SGW shall include the ARP from the stored EPS bearer context. (See 3GPP TS 23.401[3], clause 5.3.4.3).If multiple EPS Bearers IDs are reported in the message, the SGW shall include the ARP associated with the bearer with the highest priority (i.e. the lowest ARP Priority Level value).See NOTE 1."})
ies.append({ "ie_type" : "IMSI", "ie_value" : "IMSI", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included on the S11/S4 interface as part of the network triggered service restoration procedure if both the SGW and the MME/S4-SGSN support this optional feature (see 3GPP TS 23.007 [17])."})
ies.append({ "ie_type" : "F-TEID", "ie_value" : "Sender F-TEID for Control Plane", "presence" : "O", "instance" : "0", "comment" : "This IE may be included on the S11/S4 interface towards the restarted CN node or an alternative CN node (same type of mobility node as the failed one) as part of the network triggered service restoration procedure with or without ISR if both the SGW and the MME/S4-SGSN support this optional feature (see 3GPP TS 23.007 [17]). This IE shall not be included otherwise.(NOTE 2)"})
ies.append({ "ie_type" : "Indication", "ie_value" : "Indication Flags", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included if any one of the applicable flags is set to 1.Applicable flags are:Associate OCI with SGW nodes identity: The SGW shall set this flag to 1 on the S11/S4 interface if it has included the SGWs Overload Control Information and if this information is to be associated with the node identity (i.e. FQDN or the IP address received from the DNS during the SGW selection) of the serving SGW."})
ies.append({ "ie_type" : "Load Control Information", "ie_value" : "SGW's node level Load Control Information", "presence" : "O", "instance" : "0", "comment" : "The SGW may include this IE, over the S11/S4 interface if the load control feature is supported by the SGW and is activated in the network (see clause 12.2.6).When present, the SGW shall provide only one instance of this IE, representing its node level load information."})
ies.append({ "ie_type" : "Overload Control Information", "ie_value" : "SGW's Overload Control Information", "presence" : "O", "instance" : "0", "comment" : "During an overload condition, the SGW may include this IE over the S5/S8 interface if the overload control feature is supported by the SGW and is activated for the PLMN to which the PGW belongs (see clause 12.3.11).When present, the SGW shall provide only one instance of this IE, representing its overload information."})
ies.append({ "ie_type" : "Paging and Service Information", "ie_value" : "Paging and Service Information", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included on the S11 and S4 interfaces, for an IP PDN connection, if the SGW supports the Paging Policy Differentiation feature (see clause 4.9 of 3GPP TS 23.401 [3]) and if the Downlink Data Notification is triggered by the arrival of downlink data packets at the SGW. If the preceding conditions are fulfilled, then for each bearer and for each packet that triggers a Downlink Data Notification, the SGW shall copy, into the Paging Policy Indication value within this IE, the value of the DSCP in TOS (IPv4) or TC (IPv6) information received in the IP payload of the GTP-U packet from the PGW (see IETF RFC 2474 [65]).See NOTE 4.One IE with this type and instance value shall be included per EPS Bearers ID reported in the message, See NOTE 1."})
ies.append({ "ie_type" : "Integer Number", "ie_value" : "DL Data Packets Size", "presence" : "CO", "instance" : "0", "comment" : "This IE shall be included on the S11 interfaces for a PDN connection if the MT-EDT is applicable and if the SGW supports MT-EDT feature as specified in clause 8.83. When present, it shall contain the sum of DL Data Packets Size."})
msg_list[key]["ies"] = ies
